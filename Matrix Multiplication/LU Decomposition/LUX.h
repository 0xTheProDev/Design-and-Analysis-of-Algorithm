/*
 * LU Decomposition method to solve a set of linear equation
 * Author: Progyan Bhattacharya <progyanb@acm.org>
 * Repo: Design-and-Analysis-of-Algorithm [MIT LICENSE]
 */

#ifndef __LUX_h
#define __LUX_h

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
 * Proto type for LUX function
 */

void LUX(int n, double A[n][n], double B[n], double X[n]);

#endif
