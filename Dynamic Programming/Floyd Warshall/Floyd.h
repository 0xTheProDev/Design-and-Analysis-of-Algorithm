/*
 * Floyd Warshall All Pair Shortest Path
 * Author: Progyan Bhattacharya <progyanb@acm.org>
 * Repo: Design-And-Analysis-of-Algorithm [MIT LICENSE]
 */

#ifndef __Floyd_h
#define __Floyd_h

// #ifndef __limits_h
// #include <limits.h>
// #endif
#ifndef __stdio_h
#include <stdio.h>
#endif
#ifndef __stdlib_h
#include <stdlib.h>
#endif

/**
 * Proto type for floydAPSP function
 */
int floydAPSP(int n, int G[n][n]);

#endif
