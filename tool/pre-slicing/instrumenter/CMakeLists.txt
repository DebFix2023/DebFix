cmake_minimum_required(VERSION 3.0)
project(debutils)

add_link_options(${CUSTOM_LINK_OPTIONS})

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

configure_file(python/add-back.py ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/add-back.py COPYONLY)

find_package(LLVM 15 REQUIRED CONFIG)
message(STATUS "Found LLVM: ${LLVM_PACKAGE_VERSION}")

exec_program(${LLVM_TOOLS_BINARY_DIR}/llvm-config ARGS --cxxflags OUTPUT_VARIABLE LLVM_COMPILE_FLAGS)
exec_program(${LLVM_TOOLS_BINARY_DIR}/llvm-config ARGS --libs OUTPUT_VARIABLE LLVM_LIBS_CORE)
MESSAGE(STATUS "LLVM CXX flags: " ${LLVM_COMPILE_FLAGS})
MESSAGE(STATUS "LLVM core libs: " ${LLVM_LIBS_CORE})

add_definitions(${LLVM_DEFINITIONS})
set(CMAKE_CXX_FLAGS "${LLVM_COMPILE_FLAGS} ${CMAKE_CXX_FLAGS} -Os -march=native -fexceptions -pthread")
message(STATUS "CXX flags: " ${CMAKE_CXX_FLAGS})

include_directories(include)
include_directories(${LLVM_INCLUDE_DIRS})
link_directories(${LLVM_LIBRARY_DIRS})

aux_source_directory(src instrumenter_source_list)
aux_source_directory(src/instrumenter instrumenter_source_list)
aux_source_directory(src fixer_source_list)
aux_source_directory(src/fixer fixer_source_list)
add_executable(instrumenter ${instrumenter_source_list})
add_executable(fixer ${fixer_source_list})

# https://stackoverflow.com/questions/12204820/cmake-and-order-dependent-linking-of-shared-libraries
# target_link_libraries(${PROJECT_NAME} ${CLANG_LIBS} ${CLANG_LIBS} ${LLVM_LIBS_CORE})
target_link_libraries(instrumenter
  clangFormat clangFrontend clangDriver clangSema clangAnalysis clangRewrite clangAST
  clangParse clangLex clangBasic clangARCMigrate clangEdit clangFrontendTool
  clangSerialization clangTooling clangSema clangSupport clangRewriteFrontend
  clangASTMatchers clangToolingCore clangToolingInclusions
  ${LLVM_LIBS_CORE}
)
target_link_libraries(fixer
  clangFormat clangFrontend clangDriver clangSema clangAnalysis clangRewrite clangAST
  clangParse clangLex clangBasic clangARCMigrate clangEdit clangFrontendTool
  clangSerialization clangTooling clangSema clangSupport clangRewriteFrontend
  clangASTMatchers clangToolingCore clangToolingInclusions
  ${LLVM_LIBS_CORE}
)
