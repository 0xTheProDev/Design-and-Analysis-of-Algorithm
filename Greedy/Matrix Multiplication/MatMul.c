/*
 * Matrix Chain Multiplication
 * Author: Progyan Bhattacharya <progyanb@acm.org>
 * Repo: Design-And-Analysis-of-Algorithm [MIT LICENSE]
 */

#include "MatMul.h"

// Cache memory
int* cache;
int dim;

static int matChain(int *A, int i, int j) {
    // Base condition
    if (i == j) {
        return 0;
    }
    // If cached result
    int index = i * dim + j;
    if (cache[index]) {
        return cache[index];
    }
    // Count from scratch
    int min = INT_MAX, count;
    for (int k = i; k < j; k++) {
        count = matChain(A, i, k) + matChain(A, k + 1, j) + A[i - 1] * A[k] * A[j];
	if (count < min) {
	    min = count;
	   }
    }
    // Load into cache
    cache[index] = min;
    return min;
}

int matMul(int* A, int n) {
    dim = n;
    int size = n * n * sizeof(int);
    cache = malloc(size);
    memset(cache, 0, size);
    int nmul = matChain(A, 1, n - 1);
    free(cache);
    return nmul;
}
