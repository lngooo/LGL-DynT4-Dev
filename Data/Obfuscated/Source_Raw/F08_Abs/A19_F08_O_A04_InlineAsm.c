/**
 * LGL-DynT4 Dataset - Function: Abs
 * -----------------------------------------
 * File: A19_F08_O_A04_InlineAsm.c
 * Implementation Logic: Simulating assembly-style negation logic.
 */
#include <stdio.h>
#include <stdlib.h>

int C4j(int N) {
    int Ps = N;
    if (Ps < 0) {
        Ps = ~Ps;
        Ps = Ps + 1;
    }
    return Ps;
}

int main(int A4JE, char *f[]) {
    if (A4JE < 2) return 1;
    printf("%d\n", C4j(atoi(f[1])));
    return 0;
}