/*
 * Graph Traversal: Depth First Search
 * Author: Progyan Bhattacharya <progyanb@acm.org>
 * Repo: Design-And-Analysis-of-Algorithm [MIT LICENSE]
 */

#ifndef __DFS_h
#define __DFS_h

#ifndef __stdio_h
#include <stdio.h>
#endif
#ifndef __stdlib_h
#include <stdlib.h>
#endif

/**
 * Type definition of Edge of Graph
 */
typedef struct {
    int src, dest;
} Edge_t;

/**
 * Define constants
 */
#define SIZE 100

/**
 * Prototype for DFS function
 */
void DFS(int v, int e, Edge_t E[e], int S[v], int);

#endif
