/*
 * Disjoint Set: Cycle Detection by Union-Rank method
 * Author: Progyan Bhattacharya <progyanb@acm.org>
 * Repo: Design-And-Analysis-of-Algorithm [MIT LICENSE]
 */

#include "UniRank.h"

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

int hasCycle(int n, int e, Edge_t edges[e]) {
    Subset_t S[n];
    for (int i = 0; i < n; i++) {
        S[i] = (Subset_t) { i, 0 };
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
