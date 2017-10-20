/*
 * Search first occurence of a particular string in a given text [Knuth-Morris-Pratt]
 * Author: Progyan Bhattacharya <progyanb@acm.org>
 * Repo: Design-And-Analysis-of-Algorithm [MIT LICENSE]
 */

#include "KMP.h"

static void ComputeLPS(int m, char* pattern, int lps[m]) {
    int length = 0;
    lps[0] = 0;
    for (int i = 1; i < m;) {
        if (pattern[i] == pattern[length]) {
            ++length;
            lps[i] = length;
            ++i;
            continue;
        }
        if (length) {
            length = lps[length - 1];
            continue;
        }
        lps[i] = 0;
        ++i;
    }
}

int KMP(int n, char* haystack, int m, char* needle) {
    if (n == 0 || m == 0 || m > n) {
        return -1;
    }
    int lps[m];
    ComputeLPS(m, needle, lps);
    for (int i = 0, j = 0; i < n;) {
        if (haystack[i] == needle[j]) {
            ++i, ++j;
        }
        if (j == m) {
            return (i - j);
        }
        if (i < n && needle[j] != haystack[i]) {
            if (j) {
                j = lps[j - 1];
                continue;
            }
            ++i;
        }
    }
    return -1;
}
