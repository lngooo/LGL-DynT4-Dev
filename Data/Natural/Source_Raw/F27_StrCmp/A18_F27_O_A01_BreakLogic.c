/**
 * LGL-DynT4 Dataset - Function: StrCmp
 * -----------------------------------------
 * File: A18_F27_O_A01_BreakLogic.c
 * Implementation Logic: Infinite loop with internal conditional breaks derived from A01.
 */
#include <stdio.h>
#include <stdlib.h>

int StrCmp(const char *s1, const char *s2) {
    while (1) {
        if (*s1 == '\0' || *s1 != *s2) break;
        s1++; s2++;
    }
    return *(unsigned char *)s1 - *(unsigned char *)s2;
}

int main(int argc, char *argv[]) {
    if (argc < 3) return 0;
    printf("%d\n", StrCmp(argv[1], argv[2]));
    return 0;
}