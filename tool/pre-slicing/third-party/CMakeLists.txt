cmake_minimum_required(VERSION 3.0)
project(building_debaug_and_debdce)

add_link_options(${CUSTOM_LINK_OPTIONS})

if (BUILD_DEBAUG)
  include (${CMAKE_CURRENT_SOURCE_DIR}/build_debaug.cmake)
elseif (BUILD_DEBDCE)
  include (${CMAKE_CURRENT_SOURCE_DIR}/build_debdce.cmake)
endif()
