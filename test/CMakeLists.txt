cmake_minimum_required(VERSION 3.0.0)
project(Algorithm-exercise VERSION 0.1.0)

# test
include(CTest)
add_subdirectory(test)
enable_testing()
add_test(NAME myTest COMMAND Test)


add_executable(Algorithm-exercise main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
