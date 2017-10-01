/*
 * Disjoint Set: Cycle Detection by Union-Rank method
 * Author: Progyan Bhattacharya <progyanb@acm.org>
 * Repo: Design-And-Analysis-of-Algorithm [MIT LICENSE]
 */

 #ifndef __UniRank_h
 #define __UniRank_h

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
  * Type definition for an element is Vertex Set/SubSet
  */
 typedef struct {
     int parent, rank;
 } Subset_t;

 /**
  * Proto type for hasCycle function
  */
 int hasCycle(int n, int e, Edge_t edges[e]);

 #endif
