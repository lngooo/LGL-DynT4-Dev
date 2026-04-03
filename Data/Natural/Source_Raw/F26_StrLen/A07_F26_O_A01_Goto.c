/**
 * LGL-DynT4 Dataset - Function: StrLen
 * -----------------------------------------
 * File: A07_F26_O_A01_Goto.c
 * Implementation Logic: StrLen with labels and goto.
 */
#include <stdio.h>

int StrLen(const char *s) {
    int n = 0;
loop:
    if (*s == '\0') goto end;
    s++; n++;
    goto loop;
end:
    return n;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 0;
    printf("%d\n", StrLen(argv[1]));
    return 0;
}