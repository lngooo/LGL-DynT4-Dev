/**
 * LGL-DynT4 Dataset - Function: StrLen
 * -----------------------------------------
 * File: A11_F26_S_SentinelLogic.c
 * Implementation Logic: For-loop based variant (Seed 8).
 */
#include <stdio.h>

int StrLen(const char *s) {
    int i;
    for (i = 0; s[i]; ++i);
    return i;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 0;
    printf("%d\n", StrLen(argv[1]));
    return 0;
}