cmake_minimum_required(VERSION 3.4)
project(ChainOfResponsibilityPattern)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

option(BUILD_TESTS "Build tests" ON)

if(BUILD_TESTS)
  enable_testing()
  add_executable(check tests/tests.cpp)
  include_directories(./)
  target_link_libraries(check gtest gtest_main)
endif()
set(SOURCES
    program.cpp
)
add_executable(prog program.cpp)
