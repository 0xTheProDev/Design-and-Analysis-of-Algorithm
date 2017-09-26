/*
 * Prim's Algorithm for Minimal Spanning Tree
 * Author: Progyan Bhattacharya <progyanb@acm.org>
 * Repo: Design-And-Analysis-of-Algorithm [MIT LICENSE]
 */

#include "Prim.h"

static int minKey(int n, int T[n], int U[n]) {
    int min = -1;
    for (int i = 0; i < n; i++) {
        if (U[i] && (min < 0 || T[i] < T[min])) {
            min = i;
        }
    }
    return min;
}

void primMST(int n, int G[n][n], int r) {
    int T[n], P[n], U[n];
    for (int i = 0; i < n; i++) {
        T[i] = INT_MAX;
        U[i] = 1;
    }
    T[r] = 0, P[r] = -1;
    for (int k = 0; k < n - 1; k++) {
        int u = minKey(n, T, U);
        U[u] = 0;
        for (int v = 0; v < n; v++) {
            if (G[u][v] && U[v] && G[u][v] < T[v]) {
                P[v] = u, T[v] = G[u][v];
            }
        }
    }
    puts(" Edge    Weight");
    for (int i = 0; i < n; i++) {
        i ^ r && printf("%d - %d:   %d\n", P[i] + 1, i + 1, T[i]);
    }
}
