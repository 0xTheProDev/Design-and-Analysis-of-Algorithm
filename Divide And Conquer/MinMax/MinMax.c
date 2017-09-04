/*
 * Minimum and Maximum of an Array
 * Author: Progyan Bhattacharya <progyanb@acm.org>
 * Repo: Design-And-Analysis-of-Algorithm [MIT LICENSE]
 */

#include "MinMax.h"

void findMinMax(int n, int* A, int i, int j, int* min, int* max) {
    if (i == j) {
        *min = *max = A[i];
	return;
    }
    int mid = (i + j) / 2, min1, min2, max1, max2;
    findMinMax(n, A, i, mid, &min1, &max1);
    findMinMax(n, A, mid + 1, j, &min2, &max2);
    *min = min1 < min2 ? min1 : min2;
    *max = max1 > max2 ? max1: max2;
    return;
}
