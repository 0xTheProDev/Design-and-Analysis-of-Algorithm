/*
 * Graph Traversal: Depth First Search
 * Author: Progyan Bhattacharya <progyanb@acm.org>
 * Repo: Design-And-Analysis-of-Algorithm [MIT LICENSE]
 */

#include "DFS.h"

static int find(int e, Edge_t E[e], int key) {
    static int visited[SIZE];
    visited[key] = 1;
    for (int i = 0; i < e; i++) {
        if (E[i].src == key && ! visited[E[i].dest]) {
            return i;
        }
    }
    return -1;
}

void DFS(int v, int e, Edge_t E[e], int S[v], int root) {
    int stack[v], key, top = -1, count = -1, i;
    key = stack[++top] = S[++count] = root;
    while (top != -1) {
        i = find(e, E, key);
        if (i != -1) {
            key = S[++count] = stack[++top] = E[i].dest;
        } else {
            key = stack[--top];
        }
    }
}
