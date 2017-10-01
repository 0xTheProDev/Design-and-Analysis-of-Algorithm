/*
 * Selecting Maximal From n Items Without Crossing the limit weight W
 * Author: Progyan Bhattacharya <progyanb@acm.org>
 * Repo: Design-And-Analysis-of-Algorithm [MIT LICENSE]
 */

#include "Knapsack.h"

static int max(int a, int b) {
    return a > b ? a : b;
}

int knapSack(int n, item_t items[n], int W) {
    int K[n + 1][W + 1];
    for (int i = 0; i <= n; i++) {
        int val = items[i - 1].value, wt = items[i - 1].weight;
        for (int w = 0; w <= W; w++) {
            if (i == 0 || w == 0) {
                K[i][w] = 0;
            } else if (wt <= w) {
                K[i][w] = max( (val + K[i - 1][w - wt]),  K[i - 1][w] );
            } else {
                K[i][w] = K[i - 1][w];
            }
        }
    }
    return K[n][W];
}
