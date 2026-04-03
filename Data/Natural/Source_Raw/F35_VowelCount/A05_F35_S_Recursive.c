/**
 * LGL-DynT4 Dataset - Function: VowelCount
 * -----------------------------------------
 * File: A05_F35_S_Recursive.c
 * Logic: Pure recursive implementation.
 */
#include <stdio.h>
#include <stdlib.h>

int isV(char c) {
    return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
}

int VowelCount(const char* s) {
    if (*s == '\0') return 0;
    return isV(*s) + VowelCount(s + 1);
}

int main(int argc, char* argv[]) {
    if (argc < 2) { printf("0\n"); return 0; }
    printf("%d\n", VowelCount(argv[1]));
    return 0;
}