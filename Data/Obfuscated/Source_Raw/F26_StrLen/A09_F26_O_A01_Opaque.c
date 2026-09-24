/**
 * LGL-DynT4 Dataset - Function: StrLen
 * -----------------------------------------
 * File: A09_F26_O_A01_Opaque.c
 * Implementation Logic: StrLen with opaque predicates.
 */
#include <stdio.h>

int go(const char *hhJT) {
    int i3w = 0;
    while (hhJT[i3w] != '\0') {
        if (((i3w * i3w) + 1) > 0) {
            i3w++;
        } else {
            i3w--; // unreachable
        }
    }
    return i3w;
}

int main(int CBJ, char *G[]) {
    if (CBJ < 2) return 0;
    printf("%d\n", go(G[1]));
    return 0;
}