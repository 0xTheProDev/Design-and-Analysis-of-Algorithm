/*
 * Search first occurence of a particular string in a given text [Naive]
 * Author: Progyan Bhattacharya <progyanb@acm.org>
 * Repo: Design-And-Analysis-of-Algorithm [MIT LICENSE]
 */

#include "Search.h"

int main(int argc, char const *argv[]) {
    if (argc != 3) {
        fprintf(stderr, "Usage: %s [n] [m]\nn: Length of text  m: Length of search string", argv[0]);
        return EXIT_FAILURE;
    }
    int n = atoi(argv[1]);
    int m = atoi(argv[2]);
    char text[n], str[m];
    scanf("%s%*[\n]%s", text, str);
    int index = Search(n, text, m, str);
    printf("Search string found at: %d (0-indexed)\n", index);
    return EXIT_SUCCESS;
}
