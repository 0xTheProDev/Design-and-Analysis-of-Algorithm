/*
 * Floyd Warshall All Pair Shortest Path
 * Author: Progyan Bhattacharya <progyanb@acm.org>
 * Repo: Design-And-Analysis-of-Algorithm [MIT LICENSE]
 */

#include "Floyd.h"

int floydAPSP(int n, int G[n][n]) {
    int D[n][n], P[n][n];
    for (int i = 0, j = 0; j < n || (j = 0, ++i) < n; j++) {
        D[i][j] = G[i][j];
        P[i][j] = 0;
    }
    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int d = D[i][k] + D[k][j];
                if (D[i][j] > d) {
                    D[i][j] = d;
                    P[i][j] = k + 1;
                }
            }
        }
    }
    for (int i = 0, j = 0; j < n || (j = 0, ++i) < n; j++) {
        i ^ j && printf("Shortest path between %d and %d is %d via %d\n", i + 1,
        j + 1, D[i][j], P[i][j]);
    }
}
