cmake_minimum_required(VERSION 3.0)
project(find-relevant)

add_link_options(${CUSTOM_LINK_OPTIONS})

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

find_package(LLVM 15 REQUIRED CONFIG)
message(STATUS "Found LLVM: ${LLVM_PACKAGE_VERSION}")

exec_program(${LLVM_TOOLS_BINARY_DIR}/llvm-config ARGS --cxxflags OUTPUT_VARIABLE LLVM_COMPILE_FLAGS)
exec_program(${LLVM_TOOLS_BINARY_DIR}/llvm-config ARGS --libs OUTPUT_VARIABLE LLVM_LIBS_CORE)
MESSAGE(STATUS "LLVM CXX flags: " ${LLVM_COMPILE_FLAGS})
MESSAGE(STATUS "LLVM core libs: " ${LLVM_LIBS_CORE})

add_definitions(${LLVM_DEFINITIONS})
set(CMAKE_CXX_FLAGS "${LLVM_COMPILE_FLAGS} ${CMAKE_CXX_FLAGS} -Os -march=native -fexceptions -pthread")
message(STATUS "CXX flags: " ${CMAKE_CXX_FLAGS})

include_directories(.)
include_directories(${LLVM_INCLUDE_DIRS})
link_directories(${LLVM_LIBRARY_DIRS})

aux_source_directory(. source_list)
add_executable(${PROJECT_NAME} ${source_list})

target_link_libraries(${PROJECT_NAME}
  PRIVATE
  clangSema 
  clangAnalysis 
  clangAST
  clangParse 
  clangLex 
  clangBasic 
  clangFrontend 
  clangDriver 
  clangEdit 
  clangSerialization 
  clangTooling 
  clangSema 
  clangSupport 

  ${LLVM_LIBS_CORE}
)