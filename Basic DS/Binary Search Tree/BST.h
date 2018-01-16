/*
 * Abstract Data Structure: Binary Search Tree
 * Author: Progyan Bhattacharya <progyanb@acm.org>
 * Repo: Design-And-Analysis-of-Algorithm [MIT LICENSE]
 */

#ifndef __BSTree_h
#define __BSTree_h

#ifndef __stdio_h
#include <stdio.h>
#endif
#ifndef __stdlib_h
#include <stdlib.h>
#endif
#ifndef __string_h
#include <string.h>
#endif

/**
 * Type definition for Node in Binary Tree
 */
typedef struct Node {
    int data, count;
    struct Node* left;
    struct Node* right;
} Node_t;

/*
 * Prototype for Insert function
 */
Node_t* Insert(Node_t*, int);

/*
 * Prototype for Search function
 */
Node_t* Search(Node_t*, int);

/*
 * Prototype for Remove function
 */
Node_t* Remove(Node_t*, int);

/*
 * Prototype for Traverse function
 */
void Traverse(Node_t*);

/*
 * Prototype for Drop function
 */
void Drop(Node_t*);

#endif
