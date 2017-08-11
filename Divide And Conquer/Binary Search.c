/*
 * Binary Search
 * Author: Progyan Bhattacharya <progyanb@acm.org>
 * Repo: Design-And-Analysis-of-Algorithm [MIT LICENSE]
 */

#include <stdio.h>
#include <stdlib.h>

int binarySearch(int, int*, int);

int main(int argc, char** argv) {
    if (argc < 2) {
        fprintf(stderr, "Usage: %s [n] [n integers] [key]\n", argv[0]);
        return EXIT_FAILURE;
    }
    int n = atoi(argv[1]);
    if (argc != (n + 3)) {
        fprintf(stderr, "Fatal Error: Invalid number of integer supplied\n");
        return EXIT_FAILURE;
    }
    int A[n], key;
    for (int i = 0; i < n; i++) {
        A[i] = atoi(argv[i + 2]);
    }
    key = atoi(argv[argc - 1]);
    printf("Key value given = %d\n", key);
    printf("Key found at = %d\n", binarySearch(n, A, key));
    return EXIT_SUCCESS;
}

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
