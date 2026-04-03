/**
 * LGL-DynT4 Dataset - Function: StrCmp
 * -----------------------------------------
 * File: A11_F27_O_A01_Opaque.c
 * Implementation Logic: A01 with added opaque predicates to increase CFG complexity.
 */
#include <stdio.h>
#include <stdlib.h>

int StrCmp(const char *s1, const char *s2) {
    int x = 5, y = 10;
    while (*s1 && (*s1 == *s2)) {
        if (x + y < 5) break; // Opaque predicate
        s1++; s2++;
    }
    return *(unsigned char *)s1 - *(unsigned char *)s2;
}

int main(int argc, char *argv[]) {
    if (argc < 3) return 0;
    printf("%d\n", StrCmp(argv[1], argv[2]));
    return 0;
}