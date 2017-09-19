/*
 * Bubble Sort
 * Author: Progyan Bhattacharya <progyanb@acm.org>
 * Repo: Design-and-Analysis-of-Algorithm [MIT LICENSE]
 */

#include "BubbleSort.h"

static void swap(int* A, int i, int j) {
    int temp = A[i];
    A[i] = A[j];
    A[j] = temp;
}

void bubbleSort(int* A, int n) {
    int last = n, count = 1;
    while (count) {
        count = 0;
        for (int i = 1; i < last; i++) {
            if (A[i] < A[i - 1]) {
                swap(A, i - 1, i);
                count++;
            }
        }
        --last;
    }
}
