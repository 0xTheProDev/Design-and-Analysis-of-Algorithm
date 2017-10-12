/*
 * Selecting Maximal From n Items Without Crossing the limit weight W
 * Author: Progyan Bhattacharya <progyanb@acm.org>
 * Repo: Design-And-Analysis-of-Algorithm [MIT LICENSE]
 */

#include "Knapsack.h"

int main(int argc, char** argv) {
    if (argc != 3) {
        fprintf(stderr, "Usage: %s [n] [W]\n", argv[0]);
        return EXIT_FAILURE;
    }
    int n = atoi(argv[1]);
    int W = atoi(argv[2]);
    item_t items[n];
    for (int i = 0; i < n; i++) {
        printf("Enter the value and weight of item %d:\n", i + 1);
        scanf("%d %d", &items[i].value, &items[i].weight);
    }
    double max = knapSack(n, items, W);
    printf("Maximal Value: %.2lf\n", max);
    return EXIT_SUCCESS;
}
