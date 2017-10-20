/*
 * Search first occurence of a particular string in a given text [Knuth-Morris-Pratt]
 * Author: Progyan Bhattacharya <progyanb@acm.org>
 * Repo: Design-And-Analysis-of-Algorithm [MIT LICENSE]
 */

#ifndef __KMP_h
#define __KMP_h

#ifndef __stdio_h
#include <stdio.h>
#endif
#ifndef __stdlib_h
#include <stdlib.h>
#endif

/**
 * Proto type for KMP function
 */
int KMP(int, char*, int, char*);

#endif
