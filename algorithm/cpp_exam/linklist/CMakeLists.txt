
cmake_minimum_required(VERSION 3.2)

PROJECT(test_linklist)

# header file path
INCLUDE_DIRECTORIES(
include
)

# source file path
AUX_SOURCE_DIRECTORY(src DIR_SRCS)

# set environment variable
SET(TEST_LINK
    ${DIR_SRCS})

SET(CMAKE_BUILD_TYPE "Debug")
SET(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -O0 -Wall -g -ggdb")

# add executable file
ADD_EXECUTABLE(${PROJECT_NAME} ${TEST_LINK})


