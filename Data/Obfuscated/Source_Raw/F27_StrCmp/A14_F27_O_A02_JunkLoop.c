/**
 * LGL-DynT4 Dataset - Function: StrCmp
 * -----------------------------------------
 * File: A14_F27_O_A02_JunkLoop.c
 * Implementation Logic: A02 with nested dummy loops for token diversity.
 */
#include <stdio.h>
#include <stdlib.h>

int J(const char *R, const char *gka) {
    int a = 0;
    for (a = 0; R[a] != '\0'; a++) {
        for(int ytb=0; ytb<1; ytb++) {
            if (R[a] != gka[a]) return (unsigned char)R[a] - (unsigned char)gka[a];
        }
    }
    return (unsigned char)R[a] - (unsigned char)gka[a];
}

int main(int e9l, char *ON[]) {
    if (e9l < 3) return 0;
    printf("%d\n", J(ON[1], ON[2]));
    return 0;
}