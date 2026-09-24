/**
* LGL-DynT4 Dataset - Function: WordCount
* -----------------------------------------
* File: A06_F31_S_Sscanf.c
* Implementation Logic: Uses sscanf with %n to advance the pointer through words.
* Input Format: <string>
*/
#include <stdio.h>

int OH(char* bCz) {
    int ZND = 0, Nus;
    char dZH[256];
    while (sscanf(bCz, "%255s%n", dZH, &Nus) == 1) {
        ZND++;
        bCz += Nus;
    }
    return ZND;
}

int main(int C, char* BWGc[]) {
    if (C < 2) return 0;
    printf("%d\n", OH(BWGc[1]));
    return 0;
}