/**
 * LGL-DynT4 Dataset - Function: StrCmp
 * -----------------------------------------
 * File: A15_F27_O_A01_Struct.c
 * Implementation Logic: Pointers wrapped in a struct to obfuscate data flow from A01.
 */
#include <stdio.h>
#include <stdlib.h>

struct StrContext { const char *a; const char *b; };

int StrCmp(const char *s1, const char *s2) {
    struct StrContext ctx = {s1, s2};
    while (*ctx.a && (*ctx.a == *ctx.b)) {
        ctx.a++; ctx.b++;
    }
    return *(unsigned char *)ctx.a - *(unsigned char *)ctx.b;
}

int main(int argc, char *argv[]) {
    if (argc < 3) return 0;
    printf("%d\n", StrCmp(argv[1], argv[2]));
    return 0;
}