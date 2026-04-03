/**
 * LGL-DynT4 Dataset - Function: StrCmp
 * -----------------------------------------
 * File: A03_F27_S_Recursive.c
 * Implementation Logic: Deeply recursive implementation of string character comparison.
 * Input Format: <str1> <str2>
 */
#include <stdio.h>
#include <stdlib.h>

int StrCmp(const char *s1, const char *s2) {
    if (*s1 == '\0' || *s1 != *s2)
        return *(unsigned char *)s1 - *(unsigned char *)s2;
    return StrCmp(s1 + 1, s2 + 1);
}

int main(int argc, char *argv[]) {
    if (argc < 3) return 0;
    printf("%d\n", StrCmp(argv[1], argv[2]));
    return 0;
}