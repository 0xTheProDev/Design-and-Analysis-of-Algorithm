/*
 * Matrix Chain Multiplication
 * Author: Progyan Bhattacharya <progyanb@acm.org>
 * Repo: Design-And-Analysis-of-Algorithm [MIT LICENSE]
 */

#include "MatMul.h"

int matMul(int* A, int n) {
    int m = n - 1;
    int M[m][m];
    for (int i = 0, j = 0; j < m || (j = 0, ++i) < m; j++) {
        M[i][j] = i == j ? 0 : INT_MAX;
    }
    for (int i = 0; i < m; i++) {
        for (int j = i + 1; j < m; j++) {
            for (int k = i; k < j; k++) {
                int d = M[i][k] + M[k + 1][j] + A[i] * A[k + 1] * A[j + 1];
                if (d > 0 && d < M[i][j]) {
                    M[i][j] = d;
                }
            }
        }
    }
    return M[0][m-1];
}
