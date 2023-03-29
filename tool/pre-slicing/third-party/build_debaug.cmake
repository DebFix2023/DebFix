cmake_minimum_required(VERSION 3.0)
project(instrumenter)

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

include_directories(debaug/include)
include_directories(${LLVM_INCLUDE_DIRS})
link_directories(${LLVM_LIBRARY_DIRS})

add_executable(${PROJECT_NAME}
  debaug/src/cpp/Main.cpp
  debaug/src/cpp/core/InstruTransformation.cpp
  debaug/src/cpp/core/StmtInstrumentation.cpp
  debaug/src/cpp/core/BlockInstrumentation.cpp
  debaug/src/cpp/core/InstruFrontend.cpp
  debaug/src/cpp/core/InstruReformat.cpp
  debaug/src/cpp/core/SourceManager.cpp
  debaug/src/cpp/core/RewriterTool.cpp
  debaug/src/cpp/utils/InstruFileManager.cpp
  debaug/src/cpp/utils/InstruIntegrationManager.cpp
  debaug/src/cpp/utils/InstruOptionManager.cpp
  debaug/src/cpp/utils/InstruProfiler.cpp
  debaug/src/cpp/utils/InstruReport.cpp
  debaug/src/cpp/utils/InstruStatsManager.cpp
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
