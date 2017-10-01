/*
 * Disjoint Set: Cycle Detection by Union-Find method
 * Author: Progyan Bhattacharya <progyanb@acm.org>
 * Repo: Design-And-Analysis-of-Algorithm [MIT LICENSE]
 */

#include "UniFind.h"

int main(int argc, char** argv) {
    if (argc != 3) {
        fprintf(stderr, "Usage: %s [n] [e]\n", argv[0]);
        return EXIT_FAILURE;
    }
    int n = atoi(argv[1]);
    int e = atoi(argv[2]);
    Edge_t edges[e];
    for (int i = 0; i < e; i++) {
        printf("Edge #%d: Enter Source and Destination:\n", i + 1);
        scanf("%d %d", &edges[i].src, &edges[i].dest);
        --edges[i].src, --edges[i].dest;
    }
    printf("This Graph%sCycle!\n", hasCycle(n, e, edges) ? " contains " : " does not contain ");
    return EXIT_SUCCESS;
}
