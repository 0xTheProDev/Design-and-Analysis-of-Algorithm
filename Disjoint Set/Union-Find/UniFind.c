/*
 * Disjoint Set: Cycle Detection by Union-Find method
 * Author: Progyan Bhattacharya <progyanb@acm.org>
 * Repo: Design-And-Analysis-of-Algorithm [MIT LICENSE]
 */

#include "UniFind.h"

static int find(int S[], int i) {
    if (S[i] != i) {
        return find(S, S[i]);
    }
    return i;
}

static void Union(int S[], int i, int j) {
    int x = find(S, i);
    int y = find(S, j);
    S[x] = y;
}

int hasCycle(int n, int e, Edge_t edges[e]) {
    int S[n];
    for (int i = 0; i < n; i++) {
        S[i] = i;
    }
    for (int i = 0; i < e; i++) {
        int u = find(S, edges[i].src);
        int v = find(S, edges[i].dest);
        if (u == v) {
            return 1;
        }
        Union(S, u, v);
    }
    return 0;
}
