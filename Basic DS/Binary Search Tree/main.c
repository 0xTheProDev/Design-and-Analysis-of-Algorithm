/*
 * Abstract Data Structure: Binary Search Tree
 * Author: Progyan Bhattacharya <progyanb@acm.org>
 * Repo: Design-And-Analysis-of-Algorithm [MIT LICENSE]
 */

#include "BST.h"

int main(int argc, char const *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s [q: No. of Queries]\n", argv[0]);
        return EXIT_FAILURE;
    }
    int q = atoi(argv[1]), val;
    char cmd[32] = {0};
    Node_t* root = NULL;
    for (int i = 0; i < q; i++) {
        scanf("%s", cmd);
        if (! strcasecmp(cmd, "INSERT")) {
            scanf("%d", &val);
            root = Insert(root, val);
        } else if (! strcasecmp(cmd, "TRAVERSE")) {
            Traverse(root);
            putchar('\n');
        } else if (! strcasecmp(cmd, "DELETE")) {
            scanf("%d", &val);
            root = Remove(root, val);
        } else if (! strcasecmp(cmd, "SEARCH")) {
            scanf("%d", &val);
            if (Search(root, val) != NULL) {
                puts("Element found in Binary Search Tree!");
            } else {
                puts("Element not found in Binary Search Tree!");
            }
        } else {
            fprintf(stderr, "Invalid Command: %s\n", cmd);
        }
    }
    Drop(root);
    return 0;
}
