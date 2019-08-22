cmake_minimum_required(VERSION 3.14)
project("The C Programming Language" C)

set(CMAKE_C_STANDARD 99)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(C_SOURCE_FILES "chapter 1/hello.c")

add_executable(cproglang ${C_SOURCE_FILES})