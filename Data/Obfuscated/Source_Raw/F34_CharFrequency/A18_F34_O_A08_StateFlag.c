/**
* LGL-DynT4 Dataset - Function: CharFrequency
* -----------------------------------------
* File: A18_F34_O_A08_StateFlag.c
* Logic: Using bitflags to update count derived from A08.
*/
#include <stdio.h>

int FNIF(char* Ij2N, char GFT2) {
    int iu = 0;
    while (*Ij2N) {
        int FV = (*Ij2N == GFT2);
        iu += (FV & 1);
        Ij2N++;
    }
    return iu;
}

int main(int Y, char* RHa[]) {
    if (Y < 3) return 0;
    printf("%d\n", FNIF(RHa[1], RHa[2][0]));
    return 0;
}