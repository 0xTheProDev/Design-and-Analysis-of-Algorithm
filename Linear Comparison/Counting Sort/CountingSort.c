/*
 * Counting Sort
 * Author: Progyan Bhattacharya <progyanb@acm.org>
 * Repo: Design-and-Analysis-of-Algorithm [MIT LICENSE]
 */

#include "CountingSort.h"

void countingSort(int* A, int n, int max) {
    int Freq[max + 1];
    for (int i = 0; i <= max; i++) {
        Freq[i] = 0;
    }
    for (int i = 0; i < n; i++) {
        Freq[A[i]]++;
    }
    for (int i = 0, j = 0; i <= max; i++) {
        while (Freq[i] > 0) {
            A[j++] = i;
            --Freq[i];
        }
    }
}
