/**
* LGL-DynT4 Dataset - Function: CharFrequency
* -----------------------------------------
* File: A16_F34_O_A06_PtrMap.c
* Logic: Uses pointers to access histogram array derived from A06.
*/
#include <stdio.h>
#include <string.h>

int Zc8(char* Q1, char UMTS) {
    int GsP[256];
    memset(GsP, 0, sizeof(GsP));
    for(char* t4 = Q1; *t4; t4++) {
        (*(GsP + (unsigned char)*t4))++;
    }
    return *(GsP + (unsigned char)UMTS);
}

int main(int VNG, char* P[]) {
    if (VNG < 3) return 0;
    printf("%d\n", Zc8(P[1], P[2][0]));
    return 0;
}