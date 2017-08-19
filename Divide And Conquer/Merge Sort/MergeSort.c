/*
 * Merge Sort
 * Author: Progyan Bhattacharya <progyanb@acm.org>
 * Repo: Design-and-Analysis-of-Algorithm [MIT LICENSE]
 */

#include "MergeSort.h"

static void sort(int* A, int beg, int mid, int end) {
    int i, j, k, m, n;
    int B[(m = mid - beg + 1)], C[(n = end - mid + 1)];
    //puts("\nB:");
    for (int i = 0; i < m; i++) {
        B[i] = A[beg + i];
        //printf("%i: %i ", i, B[i]);
    }
    //puts("\nC:");
    for (int j = 0; j < n; j++) {
        C[j] = A[mid + j + 1];
        //printf("%i: %i ", j, C[j]);
    }
    for (i = j = 0, k = beg; k <= end; k++) {
        if (i < m && ((j < n && B[i] < C[j]) || j >= n)) {
            // Element of B comes first
            A[k] = B[i++];
            printf("B: k=%i i=%i val=%i\n", k, i, A[k]);
        } else {
            // Element of C comes first
            A[k] = C[j++];
            printf("C: k=%i i=%i val=%i\n", k, i, A[k]);
        }
    }
}

static void merge(int n, int* A, int start, int end) {
    if ((end - start) < 1) {
        return;
    }
    int middle = (start + end) / 2;
    merge(n, A, start, middle);
    merge(n, A, middle + 1, end);
    sort(A, start, middle, end);
}

void mergeSort(int n, int* A) {
    merge(n, A, 0, n);
}
