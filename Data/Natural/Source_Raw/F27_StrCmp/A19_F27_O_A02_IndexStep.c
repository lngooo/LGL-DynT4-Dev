/**
 * LGL-DynT4 Dataset - Function: StrCmp
 * -----------------------------------------
 * File: A19_F27_O_A02_IndexStep.c
 * Implementation Logic: Do-while iteration with index incrementing derived from A02.
 */
#include <stdio.h>
#include <stdlib.h>

int StrCmp(const char *s1, const char *s2) {
    int i = -1;
    do {
        i++;
        if (s1[i] != s2[i]) return (unsigned char)s1[i] - (unsigned char)s2[i];
    } while (s1[i] != '\0');
    return 0;
}

int main(int argc, char *argv[]) {
    if (argc < 3) return 0;
    printf("%d\n", StrCmp(argv[1], argv[2]));
    return 0;
}