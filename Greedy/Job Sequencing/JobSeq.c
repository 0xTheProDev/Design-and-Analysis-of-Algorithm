/*
 * Sequencing a set of Jobs according to their Profit
 * Author: Progyan Bhattacharya <progyanb@acm.org>
 * Repo: Design-And-Analysis-of-Algorithm [MIT LICENSE]
 */

#include "JobSeq.h"

static int cmp(const void* a, const void* b) {
    return (((job_t*)b)->profit - ((job_t*)a)->profit);
}

void jobSequence(int n, job_t J[n], job_t S[n]) {
    // Initialize sequence to 0
    for (int i = 0; i < n; i++) {
        S[i].id = 0;
    }
    // Sort all job accordingto their profit
    qsort(J, n, sizeof(job_t), cmp);
    // Put them into desired timeline
    for (int i = 0; i < n; i++) {
        int k = J[i].deadline;
        // DEBUG printf("%d\n", J[i].profit);
        for (int j = k - 1; j < n && j >= 0; j--) {
            if (! S[j].id) {
                S[j] = J[i];
                break;
            }
        }
    }
}
