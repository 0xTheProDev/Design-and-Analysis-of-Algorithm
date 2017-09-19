/*
 * Floyd Warshall All Pair Shortest Path
 * Author: Progyan Bhattacharya <progyanb@acm.org>
 * Repo: Design-And-Analysis-of-Algorithm [MIT LICENSE]
 */

#include "Floyd.h"

int main(int argc, char** argv) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s [n]\n", argv[0]);
        return EXIT_FAILURE;
    }
    int n = atoi(argv[1]);
    int G[n][n];
    for (int i = 0, j = 0; j < n || (j = 0, ++i) < n; j++) {
        if (i ^ j) {
            printf("Enter weight of G[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &G[i][j]);
        } else {
            G[i][j] = 0;
        }
    }
    floydAPSP(n, G);
    return EXIT_SUCCESS;
}
