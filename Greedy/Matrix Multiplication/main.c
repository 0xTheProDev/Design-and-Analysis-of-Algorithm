/*
 * Matrix Chain Multiplication
 * Author: Progyan Bhattacharya <progyanb@acm.org>
 * Repo: Design-And-Analysis-of-Algorithm [MIT LICENSE]
 */

#include "MatMul.h"

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
    int A[n], nmul;
    for (int i = 0; i < n; i++) {
        A[i] = atoi(argv[i + 2]);
    }
    nmul = matMul(A, n);
    printf("Minimum cost of multiplication is: %d\n", nmul);
    return EXIT_SUCCESS;
}
