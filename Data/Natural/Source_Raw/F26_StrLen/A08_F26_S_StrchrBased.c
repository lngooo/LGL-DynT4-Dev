/**
 * LGL-DynT4 Dataset - Function: StrLen
 * -----------------------------------------
 * File: A08_F26_S_StrchrBased.c
 * Implementation Logic: Using pointer search logic (Seed 6).
 */
#include <stdio.h>

int StrLen(const char *s) {
    const char *end = s;
    while (*end) {
        if (*end == 0) break;
        end++;
    }
    return (int)(end - s);
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 0;
    printf("%d\n", StrLen(argv[1]));
    return 0;
}