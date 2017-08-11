/*
 * Merge Sort
 * Author: Progyan Bhattacharya <progyanb@acm.org>
 * Repo: Design-and-Analysis-of-Algorithm [MIT LICENSE]
 */

#include <stdio.h>
#include <stdlib.h>

void mergeSort(int, int*);

int main(int argc, char** argv) {
    if (argc < 2) {
        fprintf(stderr, "Usage: %s [n] [n integers] [key]\n", argv[0]);
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
    mergeSort(n, A);
    for (int i = 0; i < n || ! putchar('\n'); i++) {
        printf("%d ", A[i]);
    }
    return EXIT_SUCCESS;
}

void sort(int n, int* A, int beg, int mid, int end) {
    int i, j, k;
    int B[mid - beg + 1], C[end - mid + 1];
    for (int i = 0, k = mid - beg + 1; i < k; i++) {
        B[i] = A[beg + i];
    }
    for (int j = 0, k = end - mid; j < k; j++) {
        C[j] = A[mid + j + 1];
    }
    for (i = j = 0, k = beg; k <= end; k++) {
        if (B[i] <= C[j]) {
            // Element of B comes first
            A[k] = B[i++];
        } else {
            // Element of C comes first
            A[k] = C[j++];
        }
    }
}

void merge(int n, int* A, int start, int end) {
    if ((end - start) < 1) {
        return;
    }
    int middle = (start + end) / 2;
    merge(n, A, start, middle);
    merge(n, A, middle + 1, end);
    sort(n, A, start, middle, end);
}

void mergeSort(int n, int* A) {
    merge(n, A, 0, n - 1);
}
