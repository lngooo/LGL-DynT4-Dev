/**
 * LGL-DynT4 Dataset - Function: StrLen
 * -----------------------------------------
 * File: A21_F26_O_A10_BitNotTail.c
 * Implementation Logic: Combined bitwise and pointer arithmetic.
 */
#include <stdio.h>

int StrLen(const char *s) {
    const char *p = s;
    while (*p) {
        p = (const char*)((size_t)p + 1);
    }
    return (int)(p - s);
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 0;
    printf("%d\n", StrLen(argv[1]));
    return 0;
}