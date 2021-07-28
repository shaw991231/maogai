cmake_minimum_required(VERSION 2.8.12)
project(demo VERSION 0.1.0)

include(CTest)
enable_testing()

add_library(demo demo.c Loop.c cJSON.c)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

