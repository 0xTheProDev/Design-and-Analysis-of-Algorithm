/*
 * LU Decomposition method to solve a set of linear equation
 * Author: Progyan Bhattacharya <progyanb@acm.org>
 * Repo: Design-and-Analysis-of-Algorithm [MIT LICENSE]
 */

#include "LUX.h"

int main(int argc, char const *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s [n]\n", argv[0]);
        return EXIT_FAILURE;
    }
    int n = atoi(argv[1]);
    double A[n][n], B[n], X[n];
    printf("Enter Co-efficient Matrix of Size %d X %d:\n", n, n);
    for (int i = 0, j = 0; j < n || (j = 0, ++i) < n; j++) {
        scanf("%lf", A[i] + j);
    }
    for (int i = 0; i < n; i++) {
        printf("Enter Right Hand side of equation %d: ", i + 1);
        scanf("%lf", B + i);
    }
    LUX(n, A, B, X);
    printf("The solution set of the given equations:\n");
    for (int i = 0; i < n; i++) {
        printf("X%d  = %5.2lf\n", i + 1, X[i]);
    }
    return EXIT_SUCCESS;
}
