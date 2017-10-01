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
    int max = knapSack(n, items, W);
    // int sum = 0;
    // for (int i = 0; i < n; i++) {
    //     if (S[i].id) {
    //         printf("t=%d ID=%d Deadline=%d Profit=%d\n", i, S[i].id, S[i].deadline, S[i].profit);
    //         sum += S[i].profit;
    //     }
    // }
    printf("Maximal Value: %d\n", max);
    return EXIT_SUCCESS;
}
