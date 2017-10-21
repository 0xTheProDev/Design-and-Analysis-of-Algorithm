/*
 * Coloring vertices of a graph so that no two adjacent vertices have same color
 * Author: Progyan Bhattacharya <progyanb@acm.org>
 * Repo: Design-And-Analysis-of-Algorithm [MIT LICENSE]
 */

#include "Color.h"

static int isValid(int n, int Graph[n][n], int Vertex[n], int ver, int color) {
    for (int i = 0; i < n; i++) {
        if (Graph[ver][i] && Vertex[i] == color) {
            return 0;
        }
    }
    return 1;
}

static int PutColor(int n, int Graph[n][n], int Vertex[n], int ver) {
    if (ver >= n) {
        return 1;
    }
    for (int i = 1; i <= n; i++) {
        if (isValid(n, Graph, Vertex, ver, i)) {
            Vertex[ver] = i;
            if (PutColor(n, Graph, Vertex, ver + 1)) {
                return 1;
            }
            Vertex[ver] = 0;
        }
    }
    return 0;
}

void Color(int n, int Graph[n][n], int Vertex[n]) {
    for (int i = 0; i < n; i++) {
        Graph[i][i] = 0;
    }
    for (int i = 0; i < n; i++) {
        Vertex[i] = 0;
    }
    PutColor(n, Graph, Vertex, 0);
}
