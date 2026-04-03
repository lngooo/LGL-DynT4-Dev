/**
 * LGL-DynT4 Dataset - Function: StrCmp
 * -----------------------------------------
 * File: A10_F27_O_A02_Goto.c
 * Implementation Logic: Goto-based loop reconstruction derived from A02.
 */
#include <stdio.h>
#include <stdlib.h>

int StrCmp(const char *s1, const char *s2) {
    int i = 0;
loop:
    if (s1[i] == '\0' || s1[i] != s2[i]) goto end;
    i++;
    goto loop;
end:
    return (unsigned char)s1[i] - (unsigned char)s2[i];
}

int main(int argc, char *argv[]) {
    if (argc < 3) return 0;
    printf("%d\n", StrCmp(argv[1], argv[2]));
    return 0;
}