/*
 * Abstract Data Structure: Binary Tree
 * Author: Progyan Bhattacharya <progyanb@acm.org>
 * Repo: Design-And-Analysis-of-Algorithm [MIT LICENSE]
 */

#include "BiTree.h"

int main(int argc, char const *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s [n]\n", argv[0]);
        return EXIT_FAILURE;
    }
    int n = atoi(argv[1]);
    int PreOrder[n], InOrder[n];
    printf("Enter PreOrder traversal of the Tree:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", PreOrder + i);
    }
    printf("Enter InOrder traversal of the Tree:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", InOrder + i);
    }
    Node_t* root = CreateBiTree(n, PreOrder, InOrder);
    printf("PostOrder traversal of the given Tree:\n");
    Trav_postorder(root);
    putchar('\n');
    Delete(root);
    return EXIT_SUCCESS;
}
