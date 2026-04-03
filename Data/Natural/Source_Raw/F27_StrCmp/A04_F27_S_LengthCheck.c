/**
 * LGL-DynT4 Dataset - Function: StrCmp
 * -----------------------------------------
 * File: A04_F27_S_LengthCheck.c
 * Implementation Logic: Pre-calculates minimum length to bound iterative comparison.
 * Input Format: <str1> <str2>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int StrCmp(const char *s1, const char *s2) {
    size_t l1 = strlen(s1);
    size_t l2 = strlen(s2);
    size_t min = (l1 < l2) ? l1 : l2;
    for(size_t i = 0; i < min; i++) {
        if (s1[i] != s2[i]) return (unsigned char)s1[i] - (unsigned char)s2[i];
    }
    return (unsigned char)s1[min] - (unsigned char)s2[min];
}

int main(int argc, char *argv[]) {
    if (argc < 3) return 0;
    printf("%d\n", StrCmp(argv[1], argv[2]));
    return 0;
}