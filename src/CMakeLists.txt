add_executable(huffman)

target_sources(huffman
    PRIVATE
        main.c
)

target_include_directories(huffman
    PRIVATE
        include
)
