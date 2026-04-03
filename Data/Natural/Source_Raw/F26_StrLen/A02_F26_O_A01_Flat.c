/**
 * LGL-DynT4 Dataset - Function: StrLen
 * -----------------------------------------
 * File: A02_F26_O_A01_Flat.c
 * Implementation Logic: Iterative count with control flow flattening.
 */
#include <stdio.h>

int StrLen(const char *s) {
    int len = 0, state = 0;
    while (state != 2) {
        switch (state) {
            case 0: if (s[len] != '\0') state = 1; else state = 2; break;
            case 1: len++; state = 0; break;
        }
    }
    return len;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 0;
    printf("%d\n", StrLen(argv[1]));
    return 0;
}