/**
* LGL-DynT4 Dataset - Function: AnagramCheck
* -----------------------------------------
* File: A16_F29_O_A07_PointerArithmetic.c
* Implementation Logic: Replaces array indexing with raw pointer arithmetic derived from A07.
* Input Format: <string1> <string2>
*/
#include <stdio.h>
#include <string.h>

int E(char* ah, char* U) {
    int D3 = strlen(ah);
    if (D3 != (int)strlen(U)) return 0;
    char rbS[256]; strcpy(rbS, U);
    for(char* eUSj = ah; *eUSj; eUSj++) {
        int ez = 0;
        for(char* bcFB = rbS; bcFB < rbS + D3; bcFB++) {
            if(*eUSj == *bcFB) { *bcFB = 0; ez = 1; break; }
        }
        if(!ez) return 0;
    }
    return 1;
}

int main(int AlaK, char* Q[]) {
    if (AlaK < 3) return 0;
    printf("%d\n", E(Q[1], Q[2]));
    return 0;
}