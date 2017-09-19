/*
 * Counting Sort
 * Author: Progyan Bhattacharya <progyanb@acm.org>
 * Repo: Design-and-Analysis-of-Algorithm [MIT LICENSE]
 */

#include "CountingSort.h"

int main(int argc, char** argv) {
    if (argc < 3) {
        fprintf(stderr, "Usage: %s [max] [n] [n integers]\n", argv[0]);
        return EXIT_FAILURE;
    }
    int max = atoi(argv[1]);
    int n = atoi(argv[2]);
    if (argc != (n + 3)) {
        fprintf(stderr, "Fatal Error: Invalid number of integer supplied\n");
        return EXIT_FAILURE;
    }
    int A[n];
    for (int i = 0; i < n; i++) {
        A[i] = atoi(argv[i + 3]);
        if (A[i] > max) {
            fprintf(stderr, "Fatal Error: Out of range[0, %d] integer %d supplied\n", max, A[i]);
            return EXIT_FAILURE;
        }
    }
    countingSort(A, n, max);
    for (int i = 0; i < n || ! putchar('\n'); i++) {
        printf("%d ", A[i]);
    }
    return EXIT_SUCCESS;
}
