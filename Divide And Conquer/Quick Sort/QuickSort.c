/*
 * Quick Sort
 * Author: Progyan Bhattacharya <progyanb@acm.org>
 * Repo: Design-and-Analysis-of-Algorithm [MIT LICENSE]
 */

#include "QuickSort.h"

static void swap(int* A, int i, int j) {
    int temp = A[i];
    A[i] = A[j];
    A[j] = temp;
}

static int partition(int* A, int beg, int end, F cmp) {
    int pivot = A[end];
    int i = beg - 1;
    for (int j = beg; j < end; j++) {
        if (cmp(&A[j], &pivot) < 0) {
            swap(A, ++i, j);
    	}
    }
    swap(A, ++i, end);
    return i;
}

static void quick(int* A, int start, int end, F cmp) {
    if (end <= start) {
        return;
    }
    int middle = partition(A, start, end, cmp);
    quick(A, start, middle - 1, cmp);
    quick(A, middle + 1, end, cmp);
}

void quickSort(int* A, int n, F cmp) {
    quick(A, 0, n - 1, cmp);
}
