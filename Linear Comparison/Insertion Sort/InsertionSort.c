/*
 * Insertion Sort
 * Author: Progyan Bhattacharya <progyanb@acm.org>
 * Repo: Design-and-Analysis-of-Algorithm [MIT LICENSE]
 */

#include "InsertionSort.h"

static void swap(int* A, int i, int j) {
    int temp = A[i];
    A[i] = A[j];
    A[j] = temp;
}

void insertionSort(int* A, int n) {
    for (int i = 1; i < n; i++) {
        int j = i - 1, piv = A[i];
        while (j >= 0 && A[j] > piv) {
            swap(A, j, j + 1);
            --j;
        }
        A[j + 1] = piv;
    }
}
