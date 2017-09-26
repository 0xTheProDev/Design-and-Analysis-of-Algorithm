/*
 * Sequencing a set of Jobs according to their Profit
 * Author: Progyan Bhattacharya <progyanb@acm.org>
 * Repo: Design-And-Analysis-of-Algorithm [MIT LICENSE]
 */

#include "JobSeq.h"

int main(int argc, char** argv) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s [n]\n", argv[0]);
        return EXIT_FAILURE;
    }
    int n = atoi(argv[1]);
    job_t J[n], S[n];
    for (int i = 0; i < n; i++) {
        J[i].id = i + 1;
        printf("Enter the deadline and profit of job %d:\n", i + 1);
        scanf("%d %d", &J[i].deadline, &J[i].profit);
    }
    jobSequence(n, J, S);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (S[i].id) {
            printf("t=%d ID=%d Deadline=%d Profit=%d\n", i, S[i].id, S[i].deadline, S[i].profit);
            sum += S[i].profit;
        }
    }
    printf("Maximal Profit: %d\n", sum);
    return EXIT_SUCCESS;
}
