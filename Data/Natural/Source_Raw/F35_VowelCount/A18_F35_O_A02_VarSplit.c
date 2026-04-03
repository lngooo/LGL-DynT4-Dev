/**
 * LGL-DynT4 Dataset - Function: VowelCount
 * -----------------------------------------
 * File: A18_F35_O_A02_VarSplit.c
 * Logic: strchr check with count split into two variables.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int VowelCount(const char* s) {
    int c1 = 0, c2 = 0;
    const char* v = "aeiouAEIOU";
    for(int i=0; s[i]; i++) {
        if (strchr(v, s[i])) {
            if (i % 2 == 0) c1++; else c2++;
        }
    }
    return c1 + c2;
}

int main(int argc, char* argv[]) {
    if (argc < 2) { printf("0\n"); return 0; }
    printf("%d\n", VowelCount(argv[1]));
    return 0;
}