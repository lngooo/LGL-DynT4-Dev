/**
* LGL-DynT4 Dataset - Function: WordCount
* -----------------------------------------
* File: A11_F31_O_A04_Goto.c
* Implementation Logic: Goto-based loop reconstruction derived from A04.
*/
#include <stdio.h>
#include <ctype.h>

int D5(char* gS) {
    int AVz = 0;
Kvtf:
    if (!*gS) goto kN;
QeXu:
    if (*gS && isspace(*gS)) { gS++; goto QeXu; }
    if (!*gS) goto kN;
    AVz++;
B:
    if (*gS && !isspace(*gS)) { gS++; goto B; }
    goto Kvtf;
kN:
    return AVz;
}

int main(int BjAE, char* v[]) {
    if (BjAE < 2) return 0;
    printf("%d\n", D5(v[1]));
    return 0;
}