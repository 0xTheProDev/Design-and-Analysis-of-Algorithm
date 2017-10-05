/*
 * Abstract Data Structure: Stack
 * Author: Progyan Bhattacharya <progyanb@acm.org>
 * Repo: Design-And-Analysis-of-Algorithm [MIT LICENSE]
 */

#include "Stack.h"

void push(Node_t** stack, int value) {
    Node_t* new = malloc(sizeof(Node_t));
    new->data = value, new->prev = *stack;
    *stack = new;
}

void pop(Node_t** stack) {
    if (! *stact) {
        return;
    }
    Node_t* temp = *stack;
    *stack = temp->prev;
    free(temp);
}

int top(Node_t* stack) {
    if (! stact) {
        return INT_MAX;
    }
    return stack->data;
}
