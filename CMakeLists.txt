cmake_minimum_required(VERSION 3.13)
project(workplace_clion C)

set(CMAKE_C_STANDARD 99)

add_executable(workplace_clion main.c SqList.h SqList.c LinkList.h LinkList.c)