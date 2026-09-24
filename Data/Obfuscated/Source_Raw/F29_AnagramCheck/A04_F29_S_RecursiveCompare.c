/**
* LGL-DynT4 Dataset - Function: AnagramCheck
* -----------------------------------------
* File: A04_F29_S_RecursiveCompare.c
* Implementation Logic: Recursive approach by finding and removing first char of s1 from s2.
* Input Format: <string1> <string2>
*/
#include <stdio.h>
#include <string.h>

int TEM(char* jpH, char* ZnAF) {
    if (*jpH == '\0' && *ZnAF == '\0') return 1;
    if (strlen(jpH) != strlen(ZnAF)) return 0;
    char* t = strchr(ZnAF, *jpH);
    if (!t) return 0;
    *t = ZnAF[strlen(ZnAF)-1];
    ZnAF[strlen(ZnAF)-1] = '\0';
    return TEM(jpH + 1, ZnAF);
}

int vO(char* jpH, char* ZnAF) {
    char RNB[256]; strcpy(RNB, ZnAF);
    return TEM(jpH, RNB);
}

int main(int M, char* Hs[]) {
    if (M < 3) return 0;
    printf("%d\n", vO(Hs[1], Hs[2]));
    return 0;
}