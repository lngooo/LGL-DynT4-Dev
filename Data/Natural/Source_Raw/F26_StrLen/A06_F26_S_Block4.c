/**
 * LGL-DynT4 Dataset - Function: StrLen
 * -----------------------------------------
 * File: A06_F26_S_Block4.c
 * Implementation Logic: Manual unrolling/blocking (Seed 5).
 */
#include <stdio.h>

int StrLen(const char *s) {
    int n = 0;
    for (;;) {
        if (s[0] == 0) return n;
        if (s[1] == 0) return n + 1;
        if (s[2] == 0) return n + 2;
        if (s[3] == 0) return n + 3;
        s += 4; n += 4;
    }
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 0;
    printf("%d\n", StrLen(argv[1]));
    return 0;
}