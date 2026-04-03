/**
 * LGL-DynT4 Dataset - Function: StrLen
 * -----------------------------------------
 * File: A12_F26_O_A03_PtrArith.c
 * Implementation Logic: Advanced pointer arithmetic.
 */
#include <stdio.h>

int StrLen(const char *s) {
    const char *p = s;
    for (; *p; p++);
    return (int)(size_t)(p - s);
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 0;
    printf("%d\n", StrLen(argv[1]));
    return 0;
}