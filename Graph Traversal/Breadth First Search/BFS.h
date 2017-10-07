/*
 * Graph Traversal: Breadth First Search
 * Author: Progyan Bhattacharya <progyanb@acm.org>
 * Repo: Design-And-Analysis-of-Algorithm [MIT LICENSE]
 */

#ifndef __BFS_h
#define __BFS_h

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
 * Prototype for BFS function
 */
void BFS(int v, int e, Edge_t E[e], int S[v], int);

#endif
