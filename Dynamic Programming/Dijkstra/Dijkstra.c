/*
 * Dijkstra Single Source Shortest Path
 * Author: Progyan Bhattacharya <progyanb@acm.org>
 * Repo: Design-And-Analysis-of-Algorithm [MIT LICENSE]
 */

#include "Dijkstra.h"

void dijkstraSP(int n, int G[n][n], int S) {
    int D[n], P[n], ps;
    for (int i = 0; i < n; i++) {
        D[i] = INT_MAX;
        P[i] = 1;
    }
    D[S] = 0, ps = S;
    for (int k = 0; k < n - 1; k++) {
        P[ps] = 0;
        int cur = D[ps], ms = -1;
        for (int i = 0; i < n; i++) {
            if (P[i] && G[ps][i]) {
                int d = cur + G[ps][i];
                if (D[i] > d) {
                    D[i] = d;
                }
                if (ms < 0 || D[ms] > D[i]) {
                    ms = i;
                }
            }
        }
        ps = ms;
    }
    for (int i = 0; i < n; i++) {
        i ^ S && printf("Shortest path between %d and %d is %d\n", S + 1,
        i + 1, D[i]);
    }
}
