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

add_executable(exp6_1 exp6/exp6_1.cpp)
add_executable(exp6-2 exp6/exp6-2.cpp)

add_executable(exp7 exp7/exp7.cpp)

add_executable(exp8-1 exp8/exp8-1.cpp)
add_executable(exp8-2 exp8/exp8-2.cpp)

add_executable(exp9-1 exp9/exp9-1.cpp)
add_executable(exp9-2 exp9/exp9-2.cpp)

add_executable(exp10-1 exp10/exp10-1.cpp)
add_executable(exp10-2 exp10/exp10-2.cpp)

add_executable(exp11-1 exp11/exp11-1.cpp)
add_executable(exp11-2 exp11/exp11-2.cpp)

add_executable(exp12 exp12/exp12.cpp)
