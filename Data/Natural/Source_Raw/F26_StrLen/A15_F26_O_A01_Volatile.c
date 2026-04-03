/**
 * LGL-DynT4 Dataset - Function: StrLen
 * -----------------------------------------
 * File: A15_F26_O_A01_Volatile.c
 * Implementation Logic: StrLen with volatile qualifier.
 */
#include <stdio.h>

int StrLen(const char *s) {
    volatile int len = 0;
    while (s[len]) len++;
    return len;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 0;
    printf("%d\n", StrLen(argv[1]));
    return 0;
}