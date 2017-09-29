/*
 * Kruskal's Algorithm for Minimal Spanning Tree
 * Author: Progyan Bhattacharya <progyanb@acm.org>
 * Repo: Design-And-Analysis-of-Algorithm [MIT LICENSE]
 */

#include "Kruskal.h"

static int cmp(const void* a, const void* b) {
    return (((Edge_t*)a)->weight > ((Edge_t*)b)->weight);
}

static Edge_t* GraphtoEdge(int n, int G[n][n], int* z) {
    int k = 0, m = 2;
    Edge_t* edges = malloc(m * sizeof(Edge_t));
    for (int i = 0, j = 1; j < n || (j = i + 1, ++i) < n; j++) {
        if (i ^ j) {
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

static int find(Subset_t subsets[], int i)
{
    if (subsets[i].parent != i)
        subsets[i].parent = find(subsets, subsets[i].parent);
    return subsets[i].parent;
}

static void Union(Subset_t subsets[], int x, int y)
{
    int xroot = find(subsets, x);
    int yroot = find(subsets, y);
    if (subsets[xroot].rank < subsets[yroot].rank)
        subsets[xroot].parent = yroot;
    else if (subsets[xroot].rank > subsets[yroot].rank)
        subsets[yroot].parent = xroot;
    else {
        subsets[yroot].parent = xroot;
        subsets[xroot].rank++;
    }
}

void KruskalMST(int n, int G[n][n]) {
    int m, t = 0;
    Edge_t T[n - 1], *E = GraphtoEdge(n, G, &m);
    Subset_t S[n];
    qsort(E, m, sizeof(Edge_t), cmp);
    for (int i = 0; i < n; i++) {
        S[i] = (Subset_t) { i, 0 };
    }
    for (int i = 0; t < n - 1 && i < m; i++) {
        int x = find(S, E[i].src);
        int y = find(S, E[i].dest);
        if (x != y) {
            T[t++] = E[i];
            Union(S, x, y);
        }
    }
    free(E);
    puts(" Edge    Weight");
    for (int i = 0; i < t; i++) {
        printf("%d - %d:   %d\n", T[i].src + 1, T[i].dest + 1, T[i].weight);
    }
}
