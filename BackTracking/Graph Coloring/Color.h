/*
 * Coloring vertices of a graph so that no two adjacent vertices have same color
 * Author: Progyan Bhattacharya <progyanb@acm.org>
 * Repo: Design-And-Analysis-of-Algorithm [MIT LICENSE]
 */

#ifndef __Color_h
#define __Color_h

#ifndef __stdio_h
#include <stdio.h>
#endif
#ifndef __stdlib_h
#include <stdlib.h>
#endif

/**
 * Proto type for Color function
 */
void Color(int n, int Graph[n][n], int Vertex[n]);

#endif
