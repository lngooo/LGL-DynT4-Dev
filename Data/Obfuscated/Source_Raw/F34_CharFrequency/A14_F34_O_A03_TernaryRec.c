/**
* LGL-DynT4 Dataset - Function: CharFrequency
* -----------------------------------------
* File: A14_F34_O_A03_TernaryRec.c
* Logic: Compact recursion with ternary operators derived from A03.
*/
#include <stdio.h>

int z(char* aXv, char gRqz) {
    return !*aXv ? 0 : (*aXv == gRqz ? 1 : 0) + z(aXv + 1, gRqz);
}

int main(int Ue, char* eK[]) {
    if (Ue < 3) return 0;
    printf("%d\n", z(eK[1], eK[2][0]));
    return 0;
}