/*
 * Abstract Data Structure: Queue
 * Author: Progyan Bhattacharya <progyanb@acm.org>
 * Repo: Design-And-Analysis-of-Algorithm [MIT LICENSE]
 */

#ifndef __Queue_h
#define __Queue_h

#ifndef __limits_h
#include <limits.h>
#endif
#ifndef __stdio_h
#include <stdio.h>
#endif
#ifndef __stdlib_h
#include <stdlib.h>
#endif

/**
 * Type definition for Node in Queue
 */
 typedef struct Node {
     int data;
     struct Node* next;
 } Node_t;

/**
 * Prototype for push function
 */
void push(Node_t**, int);

/**
 * Prototype for push function
 */
void pop(Node_t**);

/**
 * Prototype for front function
 */
int front(Node_t*);

/**
 * Prototype for rear function
 */
int rear(Node_t*);

#endif
