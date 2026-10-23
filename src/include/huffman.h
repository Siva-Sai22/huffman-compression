#ifndef HUFFMAN_H
#define HUFFMAN_H

#include <stdint.h>
#include <stdio.h>

#define HUFFMAN_SYMBOL_COUNT 256

typedef struct {
	size_t freq[HUFFMAN_SYMBOL_COUNT];
	char data[1024];
} state_t;

void state_init(state_t *state);
int huffman_build_frequencies(char *filepath, state_t *state);

#endif /* HUFFMAN_H */
