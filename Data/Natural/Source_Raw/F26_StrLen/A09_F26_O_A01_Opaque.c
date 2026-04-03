/**
 * LGL-DynT4 Dataset - Function: StrLen
 * -----------------------------------------
 * File: A09_F26_O_A01_Opaque.c
 * Implementation Logic: StrLen with opaque predicates.
 */
#include <stdio.h>

int StrLen(const char *s) {
    int c = 0;
    while (s[c] != '\0') {
        if (((c * c) + 1) > 0) {
            c++;
        } else {
            c--; // unreachable
        }
    }
    return c;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 0;
    printf("%d\n", StrLen(argv[1]));
    return 0;
}