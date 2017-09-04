/*
 * Minimum and Maximum of an Array
 * Author: Progyan Bhattacharya <progyanb@acm.org>
 * Repo: Design-And-Analysis-of-Algorithm [MIT LICENSE]
 */

#include "MinMax.h"

int main(int argc, char** argv) {
    if (argc < 2) {
        fprintf(stderr, "Usage: %s [n] [n integers]\n", argv[0]);
        return EXIT_FAILURE;
    }
    int n = atoi(argv[1]);
    if (argc != (n + 2)) {
        fprintf(stderr, "Fatal Error: Invalid number of integer supplied\n");
        return EXIT_FAILURE;
    }
    int A[n], min, max;
    for (int i = 0; i < n; i++) {
        A[i] = atoi(argv[i + 2]);
    }
    findMinMax(n, A, 0, n - 1, &min, &max);
    printf("Minimum = %d\nMaximum = %d\n", min, max);
    return EXIT_SUCCESS;
}
