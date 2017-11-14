/*
 * Travelling Salesman Problem
 * Author: Progyan Bhattacharya <progyanb@acm.org>
 * Repo: Design-And-Analysis-of-Algorithm [MIT LICENSE]
 */

#include "TSP.h"

int TSP(int n, int G[n][n]) {
    int Visited[n], cost = 0;
    for (int i = 0; i < n; i++) {
        Visited[i] = 1;
    }
    for (int i = 0; i < n;) {
        printf("%d - ", i + 1);
        Visited[i] = 0;
        int temp = 0, min = INT_MAX, ncity = -1;
        for (int j = 0; j < n; j++) {
            if (G[i][j] && Visited[j] && G[i][j] < min) {
                min = G[i][j] + G[j][0];
                temp = G[i][j];
                ncity = j;
            }
        }
        if (min < INT_MAX) {
            cost += temp;
        }
        if (ncity == -1) {
            cost += G[i][0];
            break;
        }
        i = ncity;
    }
    printf("1\n");
    return cost;
}
