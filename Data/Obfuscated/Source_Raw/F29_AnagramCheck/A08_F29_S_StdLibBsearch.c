/**
* LGL-DynT4 Dataset - Function: AnagramCheck
* -----------------------------------------
* File: A08_F29_S_StdLibBsearch.c
* Implementation Logic: Uses qsort and memcmp for a standard library approach.
* Input Format: <string1> <string2>
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int s(const void* V, const void* HZ) { return (*(char*)V - *(char*)HZ); }

int pYy(char* S02a, char* qnj) {
    int bbP = strlen(S02a), fxDX = strlen(qnj);
    if (bbP != fxDX) return 0;
    qsort(S02a, bbP, 1, s);
    qsort(qnj, fxDX, 1, s);
    return memcmp(S02a, qnj, bbP) == 0;
}

int main(int CO, char* JkMC[]) {
    if (CO < 3) return 0;
    printf("%d\n", pYy(JkMC[1], JkMC[2]));
    return 0;
}