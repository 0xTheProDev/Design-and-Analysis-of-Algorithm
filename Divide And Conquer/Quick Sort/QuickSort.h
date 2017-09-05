/*
 * Quick Sort
 * Author: Progyan Bhattacharya <progyanb@acm.org>
 * Repo: Design-and-Analysis-of-Algorithm [MIT LICENSE]
 */

#ifndef __QuickSort_h
#define __QuickSort_h

#ifndef __stdio_h
#include <stdio.h>
#endif
#ifndef __stdlib_h
#include <stdlib.h>
#endif

/**
 * Proto type for quickSort function
 */

typedef int(*F)(const void*, const void*);

void quickSort(int*, int, F);

#endif
