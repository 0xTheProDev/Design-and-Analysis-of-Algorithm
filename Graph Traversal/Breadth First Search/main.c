/*
 * Graph Traversal: Breadth First Search
 * Author: Progyan Bhattacharya <progyanb@acm.org>
 * Repo: Design-And-Analysis-of-Algorithm [MIT LICENSE]
 */

#include "BFS.h"

int main(int argc, char const *argv[]) {
    if (argc != 3) {
        fprintf(stderr, "%s [v] [e]\n", argv[0]);
        return EXIT_FAILURE;
    }
    int v = atoi(argv[1]), e = atoi(argv[2]);
    int trav[v], root;
    Edge_t edges[e];
    for (int i = 0; i < e; i++) {
        scanf("%d %d", &edges[i].src, &edges[i].dest);
    }
    scanf("%d", &root);
    BFS(v, e, edges, trav, root);
    for (int i = 0; i < v || ! putchar('\n'); i++) {
        printf("%d ", trav[i]);
    }
    return EXIT_SUCCESS;
}
