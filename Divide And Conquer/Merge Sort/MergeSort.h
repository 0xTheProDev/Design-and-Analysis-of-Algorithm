/*
 * Merge Sort
 * Author: Progyan Bhattacharya <progyanb@acm.org>
 * Repo: Design-and-Analysis-of-Algorithm [MIT LICENSE]
 */

#ifndef __MergeSort_h
#define __MergeSort_h

#ifndef __stdio_h
#include <stdio.h>
#endif
#ifndef __stdlib_h
#include <stdlib.h>
#endif

/**
 * Proto type for mergeSort function
 */

void mergeSort(int*, int, int(const void*, const void*));
void pmergeSort(int, int*);

#endif
