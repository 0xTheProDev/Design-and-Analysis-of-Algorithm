/*
 * Travelling Salesman Problem
 * Author: Progyan Bhattacharya <progyanb@acm.org>
 * Repo: Design-And-Analysis-of-Algorithm [MIT LICENSE]
 */

#include "TSP.h"

int main(int argc, char** argv) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s [n]\n", argv[0]);
        return EXIT_FAILURE;
    }
    int n = atoi(argv[1]);
    int G[n][n];
    for (int i = 0, j = 0; j < n || (j = 0, ++i) < n; j++) {
        scanf("%d", G[i] + j);
    }
    int cost = TSP(n, G);
    printf("Total Cost of Travelling: %d\n", cost);
    return EXIT_SUCCESS;
}
