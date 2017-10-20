/*
 * Search first occurence of a particular string in a given text [Naive]
 * Author: Progyan Bhattacharya <progyanb@acm.org>
 * Repo: Design-And-Analysis-of-Algorithm [MIT LICENSE]
 */

#include "Search.h"

int Search(int n, char* haystack, int m, char* needle) {
    if (n == 0 || m == 0 || m > n) {
        return -1;
    }
    for (int i = 0, j = 0, k = n - m + 1; i < k; i++) {
        if (haystack[i] == needle[0]) {
            for (j = 1; j < m; j++) {
                if (haystack[i + j] != needle[j]) {
                    break;
                }
            }
            if (j == m) {
                return i;
            }
        }
    }
    return -1;
}
