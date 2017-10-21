/*
 * Ford Fulkerson algorithm to find maximum flow in a network
 * Author: Progyan Bhattacharya <progyanb@acm.org>
 * Repo: Design-and-Analysis-of-Algorithm [MIT LICENSE]
 */

#include "Ford.h"

static int min(int a, int b) {
    return a < b ? a : b;
}

static int BFS(int n, int rG[n][n], int parent[n], int S, int T) {
    int visited[n], Queue[n], front = -1, rear = -1;
    for (int i = 0; i < n; i++) {
        visited[i] = 1;
    }
    Queue[++rear] = S;
    visited[S] = 0;
    parent[S] = -1;
    while (front < rear) {
        int u = Queue[++front];
        for (int v = 0; v < n; v++) {
            if (visited[v] && rG[u][v] > 0) {
                Queue[++rear] = v;
                visited[v] = 0;
                parent[v] = u;
            }
        }
    }
    return ! visited[T];
}

int MaxFlow(int n, int G[n][n], int S, int T) {
    int maxflow = 0, R[n][n], parent[n];
    for (int i = 0, j = 0; j < n || (j = 0, ++i) < n; j++) {
        if (i == j || G[i][j] < 0) {
            R[i][i] = 0;
            continue;
        }
        R[i][j] = G[i][j];
    }
    while (BFS(n, R, parent, S, T)) {
        int netflow = INT_MAX;
        for (int u = 0, v = T; v != S; v = u) {
            u = parent[v];
            netflow = min(netflow, R[u][v]);
        }
        for (int u = 0, v = T; v != S; v = u) {
            u = parent[v];
            R[u][v] -= netflow;
            R[v][u] += netflow;
        }
        maxflow += netflow;
    }
    return maxflow;
}
