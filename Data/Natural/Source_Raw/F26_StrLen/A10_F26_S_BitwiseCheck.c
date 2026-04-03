/**
 * LGL-DynT4 Dataset - Function: StrLen
 * -----------------------------------------
 * File: A10_F26_S_BitwiseCheck.c
 * Implementation Logic: Logic using bitwise NOT to check null (Seed 7).
 */
#include <stdio.h>

int StrLen(const char *s) {
    int i = 0;
    while (s[i]) {
        i = -~i; // Bitwise increment
    }
    return i;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 0;
    printf("%d\n", StrLen(argv[1]));
    return 0;
}