/*
 * Merge Sort
 * Author: Progyan Bhattacharya <progyanb@acm.org>
 * Repo: Design-and-Analysis-of-Algorithm [MIT LICENSE]
 */

#include "MergeSort.h"
#include <time.h>

#define MAX_SIZE 5000

// Testing function
int main(void) {
    time_t timestamp;
    srand((unsigned) time(&timestamp));
    unsigned int n = rand() % MAX_SIZE;
    unsigned int* A = malloc(sizeof(int) * n);
    if (! A) {
        fprintf(stderr, "Memory Error: Unable to allocate memory for %i items\n", n);
        return EXIT_FAILURE;
    }
    puts("Loading...");
    for (unsigned int i = 0; i < n; i++) {
        A[i] = n - i;
        printf("%u ", A[i]);
    }
    // mergeSort(n, A);
    pmergeSort(n, A);
    puts("\nDone...");
    unsigned int flag;
    for (unsigned int i = 0; i < n || ! putchar('\n'); i++) {
        printf("%u ", A[i]);
        flag = ! i || ( flag && A[i] > A[i - 1] );
    }
    printf("%s\n", flag ? "Correct" : "Wrong");
    free(A);
    return EXIT_SUCCESS;
}
