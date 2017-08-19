/*
 * Binary Search
 * Author: Progyan Bhattacharya <progyanb@acm.org>
 * Repo: Design-And-Analysis-of-Algorithm [MIT LICENSE]
 */

#include "BinarySearch.h"

int main(int argc, char** argv) {
    if (argc < 2) {
        fprintf(stderr, "Usage: %s [n] [n integers] [key]\n", argv[0]);
        return EXIT_FAILURE;
    }
    int n = atoi(argv[1]);
    if (argc != (n + 3)) {
        fprintf(stderr, "Fatal Error: Invalid number of integer supplied\n");
        return EXIT_FAILURE;
    }
    int A[n], key;
    for (int i = 0; i < n; i++) {
        A[i] = atoi(argv[i + 2]);
    }
    key = atoi(argv[argc - 1]);
    printf("Key value given = %d\n", key);
    printf("Key found at = %d\n", binarySearch(n, A, key));
    return EXIT_SUCCESS;
}
