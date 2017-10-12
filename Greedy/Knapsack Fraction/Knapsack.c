/*
 * Selecting Maximal From n Items Without Crossing the limit weight W
 * Author: Progyan Bhattacharya <progyanb@acm.org>
 * Repo: Design-And-Analysis-of-Algorithm [MIT LICENSE]
 */

#include "Knapsack.h"

static int comp(const void* a, const void* b) {
    item_t item_a = *(item_t*)a;
    item_t item_b = *(item_t*)b;
    return ((item_a.value / item_a.weight) < (item_b.value / item_b.weight));
}

double knapSack(int n, item_t items[n], int W) {
    if (! n || ! W) {
        return 0;
    }
    qsort(items, n, sizeof(item_t), comp);
    double RC = W, profit = 0;
    for (int i = 0; i < n; i++) {
        if (items[i].weight > RC) {
            profit += items[i].value * RC / items[i].weight;
            break;
        }
        profit += items[i].value;
        RC -= items[i].weight;
    }
    return profit;
}
