/**
 * LGL-DynT4 Dataset - Function: StrCmp
 * -----------------------------------------
 * File: A02_F27_S_ArrayIndex.c
 * Implementation Logic: Comparison using explicit array indexing and a for-loop.
 * Input Format: <str1> <str2>
 */
#include <stdio.h>
#include <stdlib.h>

int StrCmp(const char *s1, const char *s2) {
    int i = 0;
    for (i = 0; s1[i] != '\0'; i++) {
        if (s1[i] != s2[i]) return (unsigned char)s1[i] - (unsigned char)s2[i];
    }
    return (unsigned char)s1[i] - (unsigned char)s2[i];
}

int main(int argc, char *argv[]) {
    if (argc < 3) return 0;
    printf("%d\n", StrCmp(argv[1], argv[2]));
    return 0;
}