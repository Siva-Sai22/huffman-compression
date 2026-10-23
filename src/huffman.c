#include "huffman.h"
#include <string.h>

void state_init(state_t *state) { memset(state->freq, 0, sizeof(state->freq)); }

int huffman_build_frequencies(char *filepath, state_t *state) {
	FILE *fptr = fopen(filepath, "rb");
	if (!fptr) {
		perror("fopen");
		return 1;
	}

	int ch;
	while ((ch = fgetc(fptr)) != EOF) {
		state->freq[(unsigned char)ch]++;
	}

	fclose(fptr);
	return 0;
}
