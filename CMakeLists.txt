cmake_minimum_required(VERSION 3.12)
project(OOP_CPP)

set(CMAKE_CXX_STANDARD 14)

add_executable(OOP_CPP main.cpp)
add_executable(exp1_1 exp1/exp1_1.cpp)
add_executable(exp1_2 exp1/exp1-2.cpp)
add_executable(exp1_3 exp1/exp1-3.cpp)
add_executable(exp1_4 exp1/exp1-4.cpp)

add_executable(exp2_1 exp2/exp2_1.cpp)
add_executable(exp2_2 exp2/exp2_2.cpp)
add_executable(student exp2/student.cpp)
add_executable(student_main exp2/student_main.cpp exp2/student.h)

add_executable(exp4_1 exp4/exp4_1.cpp)
add_executable(exp4_2 exp4/exp4_2.cpp)
add_executable(exp4_2_2 exp4/exp4_2_2.cpp)


add_executable(exp5-1 exp5/exp5-1.cpp)
add_executable(exp5-2 exp5/exp5-2.cpp)

add_executable(exp6-1 exp6_1.cpp)