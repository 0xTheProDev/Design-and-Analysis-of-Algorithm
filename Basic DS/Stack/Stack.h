/*
 * Abstract Data Structure: Stack
 * Author: Progyan Bhattacharya <progyanb@acm.org>
 * Repo: Design-And-Analysis-of-Algorithm [MIT LICENSE]
 */

#ifndef __Stack_h
#define __Stack_h

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
 * Type definition for Node in Stack
 */
 typedef struct Node {
     int data;
     struct Node* prev;
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
 * Prototype for top function
 */
int top(Node_t*);

#endif
