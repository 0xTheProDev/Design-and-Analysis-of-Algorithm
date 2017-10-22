/*
 * LU Decomposition method to solve a set of linear equation
 * Author: Progyan Bhattacharya <progyanb@acm.org>
 * Repo: Design-and-Analysis-of-Algorithm [MIT LICENSE]
 */

#include "LUX.h"

void LUX(int n, double A[n][n], double B[n], double X[n]) {
    double L[n][n], U[n][n], Y[n];
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < n; i++) {
            if (i <= j) {
                U[i][j] = A[i][j];
                for (int k = 0; k < i; k++) {
                    U[i][j] -= L[i][k] * U[k][j];
                }
                L[i][j] = i ^ j ? 0 : 1;
            } else {
                L[i][j] = A[i][j];
                for (int k = 0; k < j; k++) {
                    L[i][j] -= L[i][k] * U[k][j];
                }
                L[i][j] = L[i][j] / U[j][j];
                U[i][j] = 0;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        Y[i] = B[i];
        for (int j = 0; j < i; j++) {
            Y[i] -= L[i][j] * Y[j];
        }
    }
    for(int i = n - 1; i >= 0; i--) {
        X[i] = Y[i];
        for(int j = i + 1; j < n; j++) {
            X[i] -= U[i][j] * X[j];
        }
        X[i] = X[i] / U[i][i];
    }
}
