/*
 * Coloring vertices of a graph so that no two adjacent vertices have same color
 * Author: Progyan Bhattacharya <progyanb@acm.org>
 * Repo: Design-And-Analysis-of-Algorithm [MIT LICENSE]
 */

#include "Color.h"

int main(int argc, char** argv) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s [n]\n", argv[0]);
        return EXIT_FAILURE;
    }
    int n = atoi(argv[1]);
    int Graph[n][n], Vertex[n];
    printf("Enter Adjacency Matrix of Size %d X %d:\n", n, n);
    for (int i = 0, j = 0; j < n || (j = 0, ++i) < n; j++) {
        scanf("%d", Graph[i] + j);
    }
    Color(n, Graph, Vertex);
    printf("   Vertex     Color\n");
    for (int i = 0; i < n; i++) {
        printf("   %3d        %3d\n", i + 1, Vertex[i]);
    }
    return EXIT_SUCCESS;
}
