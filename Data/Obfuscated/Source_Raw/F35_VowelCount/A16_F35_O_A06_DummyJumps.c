/**
 * LGL-DynT4 Dataset - Function: VowelCount
 * -----------------------------------------
 * File: A16_F35_O_A06_DummyJumps.c
 * Logic: Goto-based iteration with redundant jump paths.
 */
#include <stdio.h>
#include <stdlib.h>

int L8(const char* ij) {
    int Z = 0, zUY = 0;
J:
    if (!ij[zUY]) goto lc;
    char q = ij[zUY];
    if (q == 'a' || q == 'A') goto MZ8R;
    if (q == 'e' || q == 'E') goto MZ8R;
    if (q == 'i' || q == 'I') goto MZ8R;
    if (q == 'o' || q == 'O') goto MZ8R;
    if (q == 'u' || q == 'U') goto MZ8R;
    goto HGG3;
MZ8R:
    Z++;
    goto HGG3;
HGG3:
    zUY++;
    goto J;
lc:
    return Z;
}

int main(int wRnS, char* QGw[]) {
    if (wRnS < 2) { printf("0\n"); return 0; }
    printf("%d\n", L8(QGw[1]));
    return 0;
}