/**
 * LGL-DynT4 Dataset - Function: StrCmp
 * -----------------------------------------
 * File: A06_F27_S_WaitPass.c
 * Implementation Logic: Scans until divergence, then performs final subtraction.
 * Input Format: <str1> <str2>
 */
#include <stdio.h>
#include <stdlib.h>

int StrCmp(const char *s1, const char *s2) {
    int i = 0;
    while(s1[i] == s2[i] && s1[i] != '\0') i++;
    return (unsigned char)s1[i] - (unsigned char)s2[i];
}

int main(int argc, char *argv[]) {
    if (argc < 3) return 0;
    printf("%d\n", StrCmp(argv[1], argv[2]));
    return 0;
}