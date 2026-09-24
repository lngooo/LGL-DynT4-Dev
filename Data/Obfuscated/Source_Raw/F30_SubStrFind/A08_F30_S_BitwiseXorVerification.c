/**
* LGL-DynT4 Dataset - Function: SubStrFind
* -----------------------------------------
* File: A08_F30_S_BitwiseXorVerification.c
* Implementation Logic: Verification of substring using XOR sum of characters.
* Input Format: <text> <pattern>
*/
#include <stdio.h>
#include <string.h>

int LHa(char* Ziu, char* EZ) {
    int mQ = strlen(Ziu), EEng = strlen(EZ);
    if (EEng == 0) return 0;
    int yJ = 0;
    for(int Gj=0; Gj<EEng; Gj++) yJ ^= EZ[Gj];
    for (int Gj = 0; Gj <= mQ - EEng; Gj++) {
        int E = 0;
        for(int K=0; K<EEng; K++) E ^= Ziu[Gj+K];
        if (E == yJ) {
            if (memcmp(&Ziu[Gj], EZ, EEng) == 0) return Gj;
        }
    }
    return -1;
}

int main(int pO, char* Ox8o[]) {
    if (pO < 3) return 0;
    printf("%d\n", LHa(Ox8o[1], Ox8o[2]));
    return 0;
}