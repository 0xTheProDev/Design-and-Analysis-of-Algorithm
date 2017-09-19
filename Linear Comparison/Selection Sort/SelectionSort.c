/*
 * Selection Sort
 * Author: Progyan Bhattacharya <progyanb@acm.org>
 * Repo: Design-and-Analysis-of-Algorithm [MIT LICENSE]
 */

#include "SelectionSort.h"

static void swap(int* A, int i, int j) {
    int temp = A[i];
    A[i] = A[j];
    A[j] = temp;
}

void selectionSort(int* A, int n) {
    for (int i = 0; i < n; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            if (A[min] > A[j]) {
                min = j;
            }
        }
        if (min != i) {
            swap(A, i, min);
        }
    }
}
