/*
 * Ford Fulkerson algorithm to find maximum flow in a network
 * Author: Progyan Bhattacharya <progyanb@acm.org>
 * Repo: Design-and-Analysis-of-Algorithm [MIT LICENSE]
 */

#ifndef __Ford_h
#define __Ford_h

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
 * Proto type for MaxFlow function
 */

int MaxFlow(int n, int G[n][n], int, int);

#endif
