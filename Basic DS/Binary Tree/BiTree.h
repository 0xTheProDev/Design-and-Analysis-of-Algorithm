/*
 * Abstract Data Structure: Binary Tree
 * Author: Progyan Bhattacharya <progyanb@acm.org>
 * Repo: Design-And-Analysis-of-Algorithm [MIT LICENSE]
 */

#ifndef __BiTree_h
#define __BiTree_h

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
 * Type definition for Node in Binary Tree
 */
 typedef struct Node {
     int data;
     struct Node* left;
     struct Node* right;
 } Node_t;

Node_t* CreateBiTree(int n, int PreOrder[n], int InOrder[n]);
void Trav_postorder(Node_t*);
void Delete(Node_t*);

#endif
