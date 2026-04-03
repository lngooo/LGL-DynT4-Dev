/**
 * LGL-DynT4 Dataset - Function: StrCmp
 * -----------------------------------------
 * File: A17_F27_O_A01_Macro.c
 * Implementation Logic: Core predicates from A01 hidden behind functional macros.
 */
#include <stdio.h>
#include <stdlib.h>

#define MATCH(x, y) (*(x) == *(y))
#define EXISTS(x) (*(x) != '\0')

int StrCmp(const char *s1, const char *s2) {
    while (EXISTS(s1) && MATCH(s1, s2)) {
        s1++; s2++;
    }
    return *(unsigned char *)s1 - *(unsigned char *)s2;
}

int main(int argc, char *argv[]) {
    if (argc < 3) return 0;
    printf("%d\n", StrCmp(argv[1], argv[2]));
    return 0;
}