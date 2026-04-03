/**
 * LGL-DynT4 Dataset - Function: StrCmp
 * -----------------------------------------
 * File: A21_F27_O_A01_XorLogic.c
 * Implementation Logic: Loop condition based on bitwise XOR derived from A01.
 */
#include <stdio.h>
#include <stdlib.h>

int StrCmp(const char *s1, const char *s2) {
    for(; !(*s1 ^ *s2); s1++, s2++) {
        if(!*s1) return 0;
    }
    return *(unsigned char*)s1 - *(unsigned char*)s2;
}

int main(int argc, char *argv[]) {
    if (argc < 3) return 0;
    printf("%d\n", StrCmp(argv[1], argv[2]));
    return 0;
}