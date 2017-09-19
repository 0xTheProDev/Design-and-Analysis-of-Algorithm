/*
 * Heap Sort
 * Author: Progyan Bhattacharya <progyanb@acm.org>
 * Repo: Design-and-Analysis-of-Algorithm [MIT LICENSE]
 */

#include "HeapSort.h"

int main(int argc, char** argv) {
    if (argc < 2) {
        fprintf(stderr, "Usage: %s [n] [n integers]\n", argv[0]);
        return EXIT_FAILURE;
    }
    int n = atoi(argv[1]);
    if (argc != (n + 2)) {
        fprintf(stderr, "Fatal Error: Invalid number of integer supplied\n");
        return EXIT_FAILURE;
    }
    int A[n];
    for (int i = 0; i < n; i++) {
        A[i] = atoi(argv[i + 2]);
    }
    heapSort(A, n);
    for (int i = 0; i < n || ! putchar('\n'); i++) {
        printf("%d ", A[i]);
    }
    return EXIT_SUCCESS;
}
