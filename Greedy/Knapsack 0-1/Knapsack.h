/*
 * Selecting Maximal From n Items Without Crossing the limit weight W
 * Author: Progyan Bhattacharya <progyanb@acm.org>
 * Repo: Design-And-Analysis-of-Algorithm [MIT LICENSE]
 */

#ifndef __Knapsack_h
#define __Knapsack_h

#ifndef __stdio_h
#include <stdio.h>
#endif
#ifndef __stdlib_h
#include <stdlib.h>
#endif

/**
 * Definition of structure item
 */
 typedef struct {
     unsigned int value, weight;
 } item_t;

/**
 * Proto type for knapSack function
 */
int knapSack(int n, item_t items[n], int);

#endif
