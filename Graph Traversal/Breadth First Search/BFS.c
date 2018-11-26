/*
 * Graph Traversal: Breadth First Search
 * Author: Progyan Bhattacharya <progyanb@acm.org>
 * Repo: Design-And-Analysis-of-Algorithm [MIT LICENSE]
 */

#include "BFS.h"

void BFS(int v, int e, Edge_t E[e], int S[v], int root) {
    int visited[v], queue[v], key, front = -1, rear = -1, count = -1, i;
    for (int i = 0; i < v; i++) {
        visited[i] = 1;
    }
    queue[++rear] = root;
    while (front <= rear) {
        key = queue[++front];
        S[++count] = key;
        for (int i = 0; i < e; i++) {
            if (E[i].src == key && visited[E[i].dest - 1]) {
                queue[++rear] = E[i].dest;
                visited[E[i].dest - 1] = 0;
            }
        }
    }
}
