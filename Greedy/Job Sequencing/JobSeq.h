/*
 * Sequencing a set of Jobs according to their Profit
 * Author: Progyan Bhattacharya <progyanb@acm.org>
 * Repo: Design-And-Analysis-of-Algorithm [MIT LICENSE]
 */

#ifndef __JobSeq_h
#define __JobSeq_h

#ifndef __stdio_h
#include <stdio.h>
#endif
#ifndef __stdlib_h
#include <stdlib.h>
#endif

/**
 * Definition of structure Job
 */
 typedef struct {
     unsigned int id, deadline, profit;
 } job_t;

/**
 * Proto type for jobSequence function
 */
void jobSequence(int n, job_t J[n], job_t S[n]);

#endif
