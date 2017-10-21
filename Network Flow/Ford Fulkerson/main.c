/*
 * Ford Fulkerson algorithm to find maximum flow in a network
 * Author: Progyan Bhattacharya <progyanb@acm.org>
 * Repo: Design-and-Analysis-of-Algorithm [MIT LICENSE]
 */

#include "Ford.h"

int main(int argc, char const *argv[]) {
    if (argc != 4) {
        fprintf(stderr, "Usage: %s [n] [S] [T]\n", argv[0]);
        return EXIT_FAILURE;
    }
    int n = atoi(argv[1]);
    int S = atoi(argv[2]) - 1;
    int T = atoi(argv[3]) - 1;
    int G[n][n];
    printf("Enter Capacity Matrix of Size %d X %d:\n", n, n);
    for (int i = 0, j = 0; j < n || (j = 0, ++i) < n; j++) {
        scanf("%d", G[i] + j);
    }
    int maxflow = MaxFlow(n, G, S, T);
    printf("Maximum flow in the network is: %d\n", maxflow);
    return EXIT_SUCCESS;
}
