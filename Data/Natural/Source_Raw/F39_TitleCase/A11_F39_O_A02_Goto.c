/**
 * LGL-DynT4 Dataset - Function: TitleCase
 * -----------------------------------------
 * File: A11_F39_O_A02_Goto.c
 * Implementation Logic: Pointer-based implementation of A02 using goto labels for control flow.
 * Input Format: <string>
 */
#include <stdio.h>

void TitleCase(char* s) {
    char* p = s;
    int f = 1;
loop:
    if (!*p) return;
    if (*p == ' ') { f = 1; goto next; }
    if (f) { if(*p >= 'a') *p -= 32; f = 0; }
    else { if(*p <= 'Z' && *p >= 'A') *p += 32; }
next:
    p++;
    goto loop;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    TitleCase(argv[1]);
    printf("%s", argv[1]);
    return 0;
}