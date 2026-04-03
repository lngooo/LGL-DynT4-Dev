/**
 * LGL-DynT4 Dataset - Function: StrCmp
 * -----------------------------------------
 * File: A12_F27_O_A05_Arithmetic.c
 * Implementation Logic: A05 with arithmetic pointer manipulation.
 */
#include <stdio.h>
#include <stdlib.h>

int StrCmp(const char *s1, const char *s2) {
    while (!(*s1 - *s2) && *s1 != 0) {
        s1 = (char*)((size_t)s1 + 1);
        s2 = (char*)((size_t)s2 + 1);
    }
    return (int)(*(unsigned char*)s1 - *(unsigned char*)s2);
}

int main(int argc, char *argv[]) {
    if (argc < 3) return 0;
    printf("%d\n", StrCmp(argv[1], argv[2]));
    return 0;
}