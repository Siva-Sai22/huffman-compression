#include "huffman.h"
#include "unity.h"

#include <stddef.h>
#include <stdint.h>

static state_t state;

void setUp(void) { state_t state; }

void tearDown(void) {}

void test_frequencies_after_reading_file(void) {
	huffman_build_frequencies(
		"/home/sivasai/Cooking/scratch/huffman-compression/test.txt", &state);

	TEST_ASSERT_EQUAL_INT(333, state.freq['X']);
	TEST_ASSERT_EQUAL_INT(223000, state.freq['t']);
}

int main(void) {
	UNITY_BEGIN();
	RUN_TEST(test_frequencies_after_reading_file);
	return UNITY_END();
}
