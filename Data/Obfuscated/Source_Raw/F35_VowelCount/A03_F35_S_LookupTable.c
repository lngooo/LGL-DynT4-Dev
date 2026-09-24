/**
 * LGL-DynT4 Dataset - Function: VowelCount
 * -----------------------------------------
 * File: A03_F35_S_LookupTable.c
 * Logic: Use a 256-byte static array as a lookup table for O(1) character check.
 */
#include <stdio.h>
#include <stdlib.h>

int nzt(const char* u) {
    static int Dgu[256] = {0};
    Dgu['a'] = Dgu['e'] = Dgu['i'] = Dgu['o'] = Dgu['u'] = 1;
    Dgu['A'] = Dgu['E'] = Dgu['I'] = Dgu['O'] = Dgu['U'] = 1;
    int mgn = 0;
    for (; *u; u++) {
        if (Dgu[(unsigned char)*u]) mgn++;
    }
    return mgn;
}

int main(int xN, char* AE[]) {
    if (xN < 2) { printf("0\n"); return 0; }
    printf("%d\n", nzt(AE[1]));
    return 0;
}