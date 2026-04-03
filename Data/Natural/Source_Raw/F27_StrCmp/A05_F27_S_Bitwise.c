/**
 * LGL-DynT4 Dataset - Function: StrCmp
 * -----------------------------------------
 * File: A05_F27_S_Bitwise.c
 * Implementation Logic: Uses bitwise XOR to detect differences between characters.
 * Input Format: <str1> <str2>
 */
#include <stdio.h>
#include <stdlib.h>

int StrCmp(const char *s1, const char *s2) {
    while (!(*s1 ^ *s2) && *s1) {
        s1++; s2++;
    }
    return (int)((unsigned char)*s1 - (unsigned char)*s2);
}

int main(int argc, char *argv[]) {
    if (argc < 3) return 0;
    printf("%d\n", StrCmp(argv[1], argv[2]));
    return 0;
}