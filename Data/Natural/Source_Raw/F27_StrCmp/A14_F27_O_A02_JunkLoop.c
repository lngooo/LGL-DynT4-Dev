/**
 * LGL-DynT4 Dataset - Function: StrCmp
 * -----------------------------------------
 * File: A14_F27_O_A02_JunkLoop.c
 * Implementation Logic: A02 with nested dummy loops for token diversity.
 */
#include <stdio.h>
#include <stdlib.h>

int StrCmp(const char *s1, const char *s2) {
    int i = 0;
    for (i = 0; s1[i] != '\0'; i++) {
        for(int k=0; k<1; k++) {
            if (s1[i] != s2[i]) return (unsigned char)s1[i] - (unsigned char)s2[i];
        }
    }
    return (unsigned char)s1[i] - (unsigned char)s2[i];
}

int main(int argc, char *argv[]) {
    if (argc < 3) return 0;
    printf("%d\n", StrCmp(argv[1], argv[2]));
    return 0;
}