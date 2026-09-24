/**
 * LGL-DynT4 Dataset - Function: StrCmp
 * -----------------------------------------
 * File: A09_F27_O_A01_Flattening.c
 * Implementation Logic: Control flow flattening using switch-case derived from A01.
 */
#include <stdio.h>
#include <stdlib.h>

int Uw(const char *Dr, const char *D) {
    int FLBe = 1, bJ = 0;
    while (FLBe != 0) {
        switch(FLBe) {
            case 1: if(*Dr && (*Dr == *D)) FLBe = 2; else FLBe = 3; break;
            case 2: Dr++; D++; FLBe = 1; break;
            case 3: bJ = *(unsigned char *)Dr - *(unsigned char *)D; FLBe = 0; break;
        }
    }
    return bJ;
}

int main(int JPd5, char *E3T[]) {
    if (JPd5 < 3) return 0;
    printf("%d\n", Uw(E3T[1], E3T[2]));
    return 0;
}