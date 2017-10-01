/*
 * Bellman Ford Single Source Shortest Path
 * Author: Progyan Bhattacharya <progyanb@acm.org>
 * Repo: Design-And-Analysis-of-Algorithm [MIT LICENSE]
 */

#include "BellFord.h"

int main(int argc, char** argv) {
    if (argc != 3) {
        fprintf(stderr, "Usage: %s [n] [S]\n", argv[0]);
        return EXIT_FAILURE;
    }
    int n = atoi(argv[1]);
    int S = atoi(argv[2]) - 1;
    int G[n][n];
    for (int i = 0, j = 0; j < n || (j = 0, ++i) < n; j++) {
        if (i ^ j) {
            printf("Enter weight of G[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &G[i][j]);
        } else {
            G[i][j] = 0;
        }
    }
    bellFordSP(n, G, S);
    return EXIT_SUCCESS;
}
