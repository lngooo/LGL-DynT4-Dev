/**
* LGL-DynT4 Dataset - Function: StrCompress
* -----------------------------------------
* File: A11_F32_O_A02_Goto.c
* Implementation Logic: Goto-based reconstruction of pointer logic derived from A02.
*/
#include <stdio.h>
#include <string.h>

void r(char* WJW) {
    char *Z = WJW, *JQt;
z:
    if (!*Z) goto t;
    JQt = Z;
fQvr:
    if (*JQt == *Z) { JQt++; goto fQvr; }
    printf("%c%ld", *Z, (long)(JQt - Z));
    Z = JQt;
    goto z;
t:
    printf("\n");
}

int main(int i, char* g[]) {
    if (i < 2) return 0;
    r(g[1]);
    return 0;
}