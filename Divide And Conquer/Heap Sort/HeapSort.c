/*
 * Heap Sort
 * Author: Progyan Bhattacharya <progyanb@acm.org>
 * Repo: Design-and-Analysis-of-Algorithm [MIT LICENSE]
 */

#include "HeapSort.h"

static void swap(int* A, int i, int j) {
    int temp = A[i];
    A[i] = A[j];
    A[j] = temp;
}

static void heapify(int* A, int n, int index) {
    int largest = index;
    int left = 2 * index + 1;
    int right = 2 * index + 2;
    if (left < n && A[index] < A[left])
        largest = left;
    if (right < n && A[largest] < A[right])
        largest = right;
    if (largest != index) {
        swap(A, index, largest);
        heapify(A, n, largest);
    }
}

void heapSort(int* A, int n) {
    for (int i = n; i >= 0; i--)
        heapify(A, n, i);
    for (int i = n - 1; i > 0; i--) {
        swap(A, i, 0);
        heapify(A, i, 0);
    }
}
