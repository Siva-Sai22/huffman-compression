cmake_minimum_required(VERSION 3.23)

project(huffman-compression C)

include(CTest)

add_subdirectory(src)

if(BUILD_TESTING)
    add_subdirectory(tests)
endif()
