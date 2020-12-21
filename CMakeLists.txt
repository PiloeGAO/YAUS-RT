cmake_minimum_required(VERSION 3.10)

# set the project name
project(Tutorial VERSION 0.1)

include_directories(include)

# add the executable
add_executable(YAUSRT
    src/main.cc
    include/vec3.h
    include/color.h
)