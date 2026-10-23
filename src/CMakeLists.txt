# Library with all reusable huffman logic, so test executables can link
# against it. The CLI only contains main().
add_library(huffman_core)

target_sources(huffman_core
    PRIVATE
        huffman.c
)

target_include_directories(huffman_core
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)

add_executable(huffman)

target_sources(huffman
    PRIVATE
        main.c
)

target_link_libraries(huffman
    PRIVATE
        huffman_core
)
