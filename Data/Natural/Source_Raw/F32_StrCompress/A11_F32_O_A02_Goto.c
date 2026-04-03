/**
* LGL-DynT4 Dataset - Function: StrCompress
* -----------------------------------------
* File: A11_F32_O_A02_Goto.c
* Implementation Logic: Goto-based reconstruction of pointer logic derived from A02.
*/
#include <stdio.h>
#include <string.h>

void StrCompress(char* s) {
    char *p = s, *q;
outer:
    if (!*p) goto end;
    q = p;
inner:
    if (*q == *p) { q++; goto inner; }
    printf("%c%ld", *p, (long)(q - p));
    p = q;
    goto outer;
end:
    printf("\n");
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    StrCompress(argv[1]);
    return 0;
}