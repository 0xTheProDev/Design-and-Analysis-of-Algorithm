/*
 * Abstract Data Structure: Queue
 * Author: Progyan Bhattacharya <progyanb@acm.org>
 * Repo: Design-And-Analysis-of-Algorithm [MIT LICENSE]
 */

#include "Queue.h"

void push(Node_t** queue, int value) {
    Node_t* new = malloc(sizeof(Node_t));
    new->data = value, new->next = *queue ? *queue : new;
    *queue = new;
}

void pop(Node_t** queue) {
    Node_t* rear = *queue;
    if (! rear) {
        return;
    } else if (rear->next == *queue) {
        free(rear);
        *queue = NULL;
    }
    Node_t* temp = rear->next;
    rear->next = temp->next;
    free(temp);
}

int front(Node_t* queue) {
    if (! queue) {
        return INT_MAX;
    }
    return queue->next->data;
}

int rear(Node_t* queue) {
    if (! queue) {
        return INT_MAX;
    }
    return queue->data;
}
