/**
 * LGL-DynT4 Dataset - Function: StrCmp
 * -----------------------------------------
 * File: A02_F27_S_ArrayIndex.c
 * Implementation Logic: Comparison using explicit array indexing and a for-loop.
 * Input Format: <str1> <str2>
 */
#include <stdio.h>
#include <stdlib.h>

int VzW(const char *X0l, const char *fvwN) {
    int u1 = 0;
    for (u1 = 0; X0l[u1] != '\0'; u1++) {
        if (X0l[u1] != fvwN[u1]) return (unsigned char)X0l[u1] - (unsigned char)fvwN[u1];
    }
    return (unsigned char)X0l[u1] - (unsigned char)fvwN[u1];
}

int main(int g6U, char *O[]) {
    if (g6U < 3) return 0;
    printf("%d\n", VzW(O[1], O[2]));
    return 0;
}