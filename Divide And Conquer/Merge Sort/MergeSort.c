/*
 * Merge Sort
 * Author: Progyan Bhattacharya <progyanb@acm.org>
 * Repo: Design-and-Analysis-of-Algorithm [MIT LICENSE]
 */

#include "MergeSort.h"

static void sort(int* A, int beg, int mid, int end, int cmp(const void*, const void*)) {
    int i, j, k;
    int m = mid - beg + 1, n = end - mid;
    int B[m], C[n];
    for (int i = 0; i < m; i++) {
        B[i] = A[beg + i];
        // DEBUG printf("%i: %i ", i, B[i]);
    }
    for (int j = 0; j < n; j++) {
        C[j] = A[mid + j + 1];
        // DEBUG printf("%i: %i ", j, C[j]);
    }
    for (i = j = 0, k = beg; k <= end; k++) {
        if (i < m && ((j < n && cmp(B + i, C + j) < 0) || j >= n)) {
            // Element of B comes first
            A[k] = B[i++];
            // DEBUG printf("B: k=%i i=%i val=%i\n", k, i, A[k]);
        } else {
            // Element of C comes first
            A[k] = C[j++];
            // DEBUG printf("C: k=%i i=%i val=%i\n", k, i, A[k]);
        }
    }
}

static void merge(int n, int* A, int start, int end, int cmp(const void*, const void*)) {
    if ((end - start) < 1) {
        return;
    }
    int middle = (start + end) / 2;
    merge(n, A, start, middle, cmp);
    merge(n, A, middle + 1, end, cmp);
    sort(A, start, middle, end, cmp);
}

void mergeSort(int* A, int n, int cmp(const void*, const void*)) {
    merge(n, A, 0, n - 1, cmp);
}
