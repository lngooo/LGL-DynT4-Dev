/**
 * LGL-DynT4 Dataset - Function: HexToInt
 * -----------------------------------------
 * File: A21_F40_O_A06_Wrapper.c
 * Implementation Logic: Library call wrapped in extra function pointers.
 */
#include <stdio.h>

typedef int (*T)(const char*, const char*, ...);

int a(const char* A9) {
    int zttI = 0;
    T FztK = sscanf;
    FztK(A9, "%x", &zttI);
    return zttI;
}

int main(int LC7t, char* A[]) {
    if (LC7t < 2) return 0;
    printf("%d", a(A[1]));
    return 0;
}