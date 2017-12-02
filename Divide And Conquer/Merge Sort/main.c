/*
 * Merge Sort
 * Author: Progyan Bhattacharya <progyanb@acm.org>
 * Repo: Design-and-Analysis-of-Algorithm [MIT LICENSE]
 */

#include "MergeSort.h"

int cmp(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

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
    mergeSort(A, n, cmp);
    for (int i = 0; i < n || ! putchar('\n'); i++) {
        printf("%d ", A[i]);
    }
    return EXIT_SUCCESS;
}
