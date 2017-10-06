/*
 * Abstract Data Structure: Queue
 * Author: Progyan Bhattacharya <progyanb@acm.org>
 * Repo: Design-And-Analysis-of-Algorithm [MIT LICENSE]
 */

#include "Queue.h"

int main(int argc, char const *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s [q]\n", argv[0]);
        return EXIT_FAILURE;
    }
    int q = atoi(argv[1]);
    Node_t* queue = NULL;
    printf("Code: 1 => Push  2 => Pop  3 => Front\n");
    for (int i = 0; i < q; i++) {
        int c, n;
        scanf("%d", &c);
        switch (c) {
            case 1:  scanf("%d", &n); push(&queue, n); break;
            case 2:  pop(&queue); break;
            case 3:  n = front(queue); printf("%d\n", n); break;
            default: return EXIT_FAILURE;
        }
    }
    return EXIT_SUCCESS;
}
