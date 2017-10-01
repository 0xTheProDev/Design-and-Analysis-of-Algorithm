/*
 * Disjoint Set: Cycle Detection by Union-Find method
 * Author: Progyan Bhattacharya <progyanb@acm.org>
 * Repo: Design-And-Analysis-of-Algorithm [MIT LICENSE]
 */

 #ifndef __UniFind_h
 #define __UniFind_h

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
  * Type definition for an Edge in a graph
  */
 typedef struct {
     int src, dest;
 } Edge_t;
 
 /**
  * Proto type for hasCycle function
  */
 int hasCycle(int n, int e, Edge_t edges[e]);

 #endif
