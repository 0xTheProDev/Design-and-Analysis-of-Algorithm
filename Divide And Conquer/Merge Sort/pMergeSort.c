/*
 * Merge Sort
 * Author: Progyan Bhattacharya <progyanb@acm.org>
 * Repo: Design-and-Analysis-of-Algorithm [MIT LICENSE]
 */

#include "MergeSort.h"
#include <pthread.h>

int *A;
pthread_attr_t tattr;
typedef struct {
    int start, end;
} term;

static void sort(int beg, int mid, int end) {
    int i, j, k;
    int m = mid - beg + 1, n = end - mid;
    int B[m], C[n];
    for (int i = 0; i < m; i++) {
        B[i] = A[beg + i];
        // DEBUG printf("%i: %i ", i, B[i]);
    }
    for (int j = 0; j < n; j++) {
        C[j] = A[mid + j + 1];
        // DEBUG printf("%i: %i ", j, C[j]);
    }
    for (i = j = 0, k = beg; k <= end; k++) {
        if (i < m && ((j < n && B[i] < C[j]) || j >= n)) {
            // Element of B comes first
            A[k] = B[i++];
            // DEBUG printf("B: k=%i i=%i val=%i\n", k, i, A[k]);
        } else {
            // Element of C comes first
            A[k] = C[j++];
            // DEBUG printf("C: k=%i i=%i val=%i\n", k, i, A[k]);
        }
    }
}

static void* merge(void* arg) {
    // Analyzing arguments
    term* args = (term*) arg;
    int start = args->start, end = args->end;
    // Base condition
    if ((end - start) < 1) {
        return NULL;
    }
    // Thread IDs
    pthread_t tids[2];
    // Parameters
    int middle = (start + end) / 2;
    term first = (term) { start, middle };
    term next = (term) { middle + 1, end };
    // Create Threads
    pthread_create(tids, &tattr, merge, &first);
    pthread_create(tids + 1, &tattr, merge, &next);
    // Wait for completition
    pthread_join(tids[0], NULL);
    pthread_join(tids[1], NULL);
    // Call sort on sub-arrays
    sort(start, middle, end);
}

void pmergeSort(int n, int* a) {
    A = a;
    pthread_attr_init(&tattr);
    term init = (term) { 0, n - 1 };
    merge(&init);
}
