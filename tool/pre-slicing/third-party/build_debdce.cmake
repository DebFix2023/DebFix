cmake_minimum_required(VERSION 3.0)
project(debdce)

add_link_options(${CUSTOM_LINK_OPTIONS})

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
file(MAKE_DIRECTORY ${CMAKE_LIBRARY_OUTPUT_DIRECTORY})
file(MAKE_DIRECTORY ${CMAKE_LIBRARY_OUTPUT_DIRECTORY}/wrappers)

find_package(LLVM 9 REQUIRED CONFIG)
message(STATUS "Found LLVM: ${LLVM_PACKAGE_VERSION}")

exec_program(${LLVM_TOOLS_BINARY_DIR}/llvm-config ARGS --cxxflags OUTPUT_VARIABLE LLVM_COMPILE_FLAGS)
exec_program(${LLVM_TOOLS_BINARY_DIR}/llvm-config ARGS --libs OUTPUT_VARIABLE LLVM_LIBS_CORE)
MESSAGE(STATUS "LLVM CXX flags: " ${LLVM_COMPILE_FLAGS})
MESSAGE(STATUS "LLVM core libs: " ${LLVM_LIBS_CORE})

add_definitions(${LLVM_DEFINITIONS})
set(CMAKE_CXX_FLAGS "${LLVM_COMPILE_FLAGS} ${CMAKE_CXX_FLAGS} -Os -march=native -fexceptions -pthread")
message(STATUS "CXX flags: " ${CMAKE_CXX_FLAGS})

include_directories(debaug/debdce/include)
include_directories(${LLVM_INCLUDE_DIRS})
link_directories(${LLVM_LIBRARY_DIRS})

add_executable(${PROJECT_NAME}
  debaug/debdce/src/main/cpp/Main.cpp
  debaug/debdce/src/main/cpp/core/Frontend.cpp
  debaug/debdce/src/main/cpp/core/SourceManager.cpp
  debaug/debdce/src/main/cpp/core/Transformation.cpp
  debaug/debdce/src/main/cpp/core/Reduction.cpp
  debaug/debdce/src/main/cpp/core/LocalReduction.cpp
  debaug/debdce/src/main/cpp/core/DeadcodeElimination.cpp
  debaug/debdce/src/main/cpp/core/Reformat.cpp
  debaug/debdce/src/main/cpp/utils/FileManager.cpp
  debaug/debdce/src/main/cpp/utils/IntegrationManager.cpp
  debaug/debdce/src/main/cpp/utils/OptionManager.cpp
  debaug/debdce/src/main/cpp/utils/Report.cpp
  debaug/debdce/src/main/cpp/utils/Profiler.cpp
  debaug/debdce/src/main/cpp/utils/StatsManager.cpp
)

add_custom_target(lib ALL
  COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_SOURCE_DIR}/debaug/lib/wrappers/* ${CMAKE_LIBRARY_OUTPUT_DIRECTORY}/wrappers/
)

# https://stackoverflow.com/questions/12204820/cmake-and-order-dependent-linking-of-shared-libraries
# target_link_libraries(${PROJECT_NAME} ${CLANG_LIBS} ${CLANG_LIBS} ${LLVM_LIBS_CORE})
target_link_libraries(${PROJECT_NAME}
  clangFormat clangFrontend clangDriver clangSema clangAnalysis clangRewrite clangAST
  clangParse clangLex clangBasic clangARCMigrate clangEdit clangFrontendTool
  clangSerialization clangTooling clangSema clangRewriteFrontend
  clangASTMatchers clangToolingCore clangToolingInclusions
  ${LLVM_LIBS_CORE}
)
