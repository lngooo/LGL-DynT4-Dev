/**
 * LGL-DynT4 Dataset - Function: StrLen
 * -----------------------------------------
 * File: A01_F26_S_Standard.c
 * Implementation Logic: Standard iterative counter (Seed 1).
 */
#include <stdio.h>

int StrLen(const char *s) {
    int len = 0;
    while (s[len] != '\0') {
        len++;
    }
    return len;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 0;
    printf("%d\n", StrLen(argv[1]));
    return 0;
}