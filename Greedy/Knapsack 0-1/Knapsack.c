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
    if (! n || ! W) {
        return 0;
    }
    else if (items[n - 1].weight > W) {
        return knapSack(n - 1, items, W);
    }
    int val = items[n - 1].value, wt = items[n - 1].weight;
    return max( (val + knapSack(n - 1, items, W - wt)), (knapSack(n - 1, items, W)) );
}
