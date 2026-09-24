/**
 * LGL-DynT4 Dataset - Function: StrLen
 * -----------------------------------------
 * File: A13_F26_O_A01_Struct.c
 * Implementation Logic: Wrapping index in structure.
 */
#include <stdio.h>

struct EDui { int aeq; };

int n7U(const char *d) {
    struct EDui ijE0 = {0};
    while (d[ijE0.aeq]) ijE0.aeq++;
    return ijE0.aeq;
}

int main(int WZ, char *zY[]) {
    if (WZ < 2) return 0;
    printf("%d\n", n7U(zY[1]));
    return 0;
}