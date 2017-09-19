/*
 * Linear Search
 * Author: Progyan Bhattacharya <progyanb@acm.org>
 * Repo: Design-And-Analysis-of-Algorithm [MIT LICENSE]
 */

#include "LinearSearch.h"

int linearSearch(int n, int* A, int key) {
    for (int i = 0; i < n; i++) {
        if (A[i] == key) {
            return i;
        }
    }
    // Key not found
    return -1;
}
