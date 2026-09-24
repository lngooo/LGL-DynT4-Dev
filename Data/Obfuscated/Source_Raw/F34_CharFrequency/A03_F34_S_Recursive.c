/**
* LGL-DynT4 Dataset - Function: CharFrequency
* -----------------------------------------
* File: A03_F34_S_Recursive.c
* Logic: Recursive counting by breaking string into head and tail.
*/
#include <stdio.h>

int Xr(char* IjpL, char GrO) {
    if (*IjpL == '\0') return 0;
    return (*IjpL == GrO ? 1 : 0) + Xr(IjpL + 1, GrO);
}

int main(int b, char* EW[]) {
    if (b < 3) return 0;
    printf("%d\n", Xr(EW[1], EW[2][0]));
    return 0;
}