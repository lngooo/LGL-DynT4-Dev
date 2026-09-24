/**
* LGL-DynT4 Dataset - Function: SubStrFind
* -----------------------------------------
* File: A05_F30_S_Recursive.c
* Implementation Logic: Recursive implementation of substring search.
* Input Format: <text> <pattern>
*/
#include <stdio.h>
#include <string.h>

int oTCZ(char* g, char* ii, int C, int xYSB) {
    if (*g == '\0') return -1;
    if (strncmp(g, ii, xYSB) == 0) return C;
    return oTCZ(g + 1, ii, C + 1, xYSB);
}

int T(char* OIg, char* EcrB) {
    int xYSB = strlen(EcrB);
    if (xYSB == 0) return 0;
    return oTCZ(OIg, EcrB, 0, xYSB);
}

int main(int eefq, char* EzG[]) {
    if (eefq < 3) return 0;
    printf("%d\n", T(EzG[1], EzG[2]));
    return 0;
}