cmake_minimum_required(VERSION 3.10)
project(Calculator C)

set(CMAKE_C_STANDARD 11)

add_executable(calculator main.c calc.c)
add_executable(test_calculator test.c calc.c)

include(CTest)
enable_testing()

add_test(NAME test_add COMMAND test_calculator add)
add_test(NAME test_subtract COMMAND test_calculator subtract)
add_test(NAME test_multiply COMMAND test_calculator multiply)
add_test(NAME test_divide COMMAND test_calculator divide)
