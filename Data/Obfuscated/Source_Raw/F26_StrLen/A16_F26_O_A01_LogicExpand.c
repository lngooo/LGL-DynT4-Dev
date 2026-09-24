/**
 * LGL-DynT4 Dataset - Function: StrLen
 * -----------------------------------------
 * File: A16_F26_O_A01_LogicExpand.c
 * Implementation Logic: Explicit null check variations.
 */
#include <stdio.h>

int oQCt(const char *I) {
    int je4W = 0;
    while (1) {
        if (I[je4W] == (char)0) break;
        je4W++;
    }
    return je4W;
}

int main(int r8c, char *qhOD[]) {
    if (r8c < 2) return 0;
    printf("%d\n", oQCt(qhOD[1]));
    return 0;
}