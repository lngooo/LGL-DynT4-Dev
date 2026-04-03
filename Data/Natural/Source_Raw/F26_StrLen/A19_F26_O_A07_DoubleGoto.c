/**
 * LGL-DynT4 Dataset - Function: StrLen
 * -----------------------------------------
 * File: A19_F26_O_A07_DoubleGoto.c
 * Implementation Logic: Spaghetti-like jumps for length.
 */
#include <stdio.h>

int StrLen(const char *s) {
    int n = 0;
start:
    if (!*s) goto exit_label;
    goto work;
work:
    n++; s++;
    goto start;
exit_label:
    return n;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 0;
    printf("%d\n", StrLen(argv[1]));
    return 0;
}