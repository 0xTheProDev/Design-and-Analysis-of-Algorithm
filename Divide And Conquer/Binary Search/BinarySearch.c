/*
 * Binary Search
 * Author: Progyan Bhattacharya <progyanb@acm.org>
 * Repo: Design-And-Analysis-of-Algorithm [MIT LICENSE]
 */

#include "BinarySearch.h"

int binarySearch(int n, int* A, int key) {
    int hi = n, lo = 0, mid;
    do {
        // Mid value
        mid = (hi + lo) / 2;
        if (A[mid] == key) {
            // Found Key
            return mid;
        } else if (A[mid] > key) {
            // Key is in the left
            hi = mid - 1;
        } else {
            // Key is in the right
            lo = mid + 1;
        }
    } while(lo <= hi);
    // Key not found
    return -1;
}
