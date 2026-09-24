/**
* LGL-DynT4 Dataset - Function: AnagramCheck
* -----------------------------------------
* File: A07_F29_S_DualPointer.c
* Implementation Logic: Iterates through s1 and uses a second pointer to scan and nullify in s2.
* Input Format: <string1> <string2>
*/
#include <stdio.h>
#include <string.h>

int eCy(char* YX, char* Tjx) {
    int E = strlen(YX), oO = strlen(Tjx);
    if (E != oO) return 0;
    char u[256]; strcpy(u, Tjx);
    for(int NEJ=0; NEJ<E; NEJ++) {
        int Yr = 0;
        for(int FuM=0; FuM<oO; FuM++) {
            if(YX[NEJ] == u[FuM]) {
                u[FuM] = 0; Yr = 1; break;
            }
        }
        if(!Yr) return 0;
    }
    return 1;
}

int main(int ZP, char* MM[]) {
    if (ZP < 3) return 0;
    printf("%d\n", eCy(MM[1], MM[2]));
    return 0;
}