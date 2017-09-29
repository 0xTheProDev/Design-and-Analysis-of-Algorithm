/*
 * Kruskal's Algorithm for Minimal Spanning Tree
 * Author: Progyan Bhattacharya <progyanb@acm.org>
 * Repo: Design-And-Analysis-of-Algorithm [MIT LICENSE]
 */

#ifndef __Kruskal_h
#define __Kruskal_h

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
 * Type definition for an Edge in a graph
 */
typedef struct {
    int weight, src, dest;
} Edge_t;

/**
 * Type definition for an element is Vertex Set/SubSet
 */
typedef struct {
    int parent, rank;
} Subset_t;

/**
 * Proto type for KruskalMST function
 */
void KruskalMST(int n, int G[n][n]);

#endif
