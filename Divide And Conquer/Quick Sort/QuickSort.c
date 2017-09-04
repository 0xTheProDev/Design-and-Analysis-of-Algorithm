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

static int partition(int* A, int beg, int end) {
    int pivot = A[end];
    int i = beg - 1;
    for (int j = beg; j < end; j++) {
        if (A[j] <=  pivot) {
	    i++;
	    swap(A, i, j);
	}
    }
    swap(A, i + 1, end);
    return (i + 1);
}

static void quick(int* A, int start, int end) {
    if (end < start) {
        return;
    }
    int middle = partition(A, start, end);
    quick(A, start, middle - 1);
    quick(A, middle + 1, end);
}

void quickSort(int n, int* A) {
    quick(A, 0, n - 1);
}
