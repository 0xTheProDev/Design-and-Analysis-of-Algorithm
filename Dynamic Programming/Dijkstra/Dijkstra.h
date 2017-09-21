/*
 * Dijkstra Single Source Shortest Path
 * Author: Progyan Bhattacharya <progyanb@acm.org>
 * Repo: Design-And-Analysis-of-Algorithm [MIT LICENSE]
 */

#ifndef __Dijkstra_h
#define __Dijkstra_h

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
 * Proto type for dijkstraSP function
 */
void dijkstraSP(int n, int G[n][n], int);

#endif
