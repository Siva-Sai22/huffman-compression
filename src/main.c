#include <stdio.h>

int main(int argc, char *argv[]) {
	if (argc < 2) {
		fprintf(stderr, "Usage: %s <input-file>\n", argv[0]);
		return 1;
	}

	printf("TODO: compress %s\n", argv[1]);
	return 0;
}
