/*
 * Abstract Data Structure: Stack
 * Author: Progyan Bhattacharya <progyanb@acm.org>
 * Repo: Design-And-Analysis-of-Algorithm [MIT LICENSE]
 */

#include "Stack.h"

int main(int argc, char const *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s [q]\n", argv[0]);
        return EXIT_FAILURE;
    }
    int q = atoi(argv[1]);
    Node_t* stack = NULL;
    printf("Code: 1 => Push  2 => Pop  3 => Top\n");
    for (int i = 0; i < q; i++) {
        int c, n;
        scanf("%d", &c);
        switch (c) {
            case 1:  scanf("%d", &n); push(&stack, n); break;
            case 2:  pop(&stack); break;
            case 3:  n = top(stack); printf("%d\n", n); break;
            default: return EXIT_FAILURE;
        }
    }
    return EXIT_SUCCESS;
}
