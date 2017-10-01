/*
 * Bellman Ford Single Source Shortest Path
 * Author: Progyan Bhattacharya <progyanb@acm.org>
 * Repo: Design-And-Analysis-of-Algorithm [MIT LICENSE]
 */

#include "BellFord.h"

static Edge_t* GraphtoEdge(int n, int G[n][n], int* z) {
    int k = 0, m = 2;
    Edge_t* edges = malloc(m * sizeof(Edge_t));
    for (int i = 0, j = 0; j < n || (j = 0, ++i) < n; j++) {
        if (i ^ j && G[i][j]) {
            edges[k++] = (Edge_t) { G[i][j], i, j };
            if (k >= m) {
                m *= 2;
                edges = realloc(edges, m * sizeof(Edge_t));
            }
        }
    }
    *z = k;
    return edges;
}

void bellFordSP(int n, int G[n][n], int S) {
    int D[n], e;
    for (int i = 0; i < n; i++) {
        D[i] = INT_MAX;
    }
    D[S] = 0;
    Edge_t* edges = GraphtoEdge(n, G, &e);
    for (int k = 0; k < n - 1; k++) {
        for (int j = 0; j < e; j++) {
            int u = edges[j].src, v = edges[j].dest;
            int d = D[u] + edges[j].weight;
            if (D[u] != INT_MAX && D[v] > d) {
                D[v] = d;
            }
        }
    }
    free(edges);
    for (int i = 0; i < n; i++) {
        i ^ S && printf("Shortest path between %d and %d is %d\n", S + 1,
        i + 1, D[i]);
    }
}
