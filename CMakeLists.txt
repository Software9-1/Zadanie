cmake_minimum_required(VERSION 3.10)
project(ThreeSumClosest)

set(CMAKE_CXX_STANDARD 11)

# Добавляем исполняемый файл
add_executable(three_sum_closest src/main.cpp src/three_sum_closest.cpp)

# Добавляем тесты
enable_testing()
add_test(NAME ThreeSumClosestTests COMMAND three_sum_closest)
