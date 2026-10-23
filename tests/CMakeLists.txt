include(FetchContent)

FetchContent_Declare(
    unity
    GIT_REPOSITORY https://github.com/ThrowTheSwitch/Unity.git
    GIT_TAG        v2.7.0
)
FetchContent_MakeAvailable(unity)

add_executable(test_huffman)

target_sources(test_huffman
    PRIVATE
        test_huffman.c
)

target_link_libraries(test_huffman
    PRIVATE
        huffman_core
        unity
)

add_test(NAME test_huffman COMMAND test_huffman)
