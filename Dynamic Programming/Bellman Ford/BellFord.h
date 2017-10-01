/*
 * Bellman Ford Single Source Shortest Path
 * Author: Progyan Bhattacharya <progyanb@acm.org>
 * Repo: Design-And-Analysis-of-Algorithm [MIT LICENSE]
 */

#ifndef __BellFord_h
#define __BellFord_h

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
 * Proto type for bellFordSP function
 */
void bellFordSP(int n, int G[n][n], int);

#endif
