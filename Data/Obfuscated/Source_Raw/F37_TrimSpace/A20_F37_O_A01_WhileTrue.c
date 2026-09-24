/**
* LGL-DynT4 Dataset - Function: TrimSpace
* -----------------------------------------
* File: A20_F37_O_A01_WhileTrue.c
* Logic: while(1) loop with manual break and pointer casting derived from A01.
*/
#include <stdio.h>
#include <ctype.h>

void Okx(char* Glt) {
    int hQ = 0, Gu = 0;
    while (1) {
        if (Glt[hQ] == '\0') break;
        unsigned char xZW = (unsigned char)Glt[hQ];
        if (!isspace(xZW)) {
            Glt[Gu] = (char)xZW;
            Gu++;
        }
        hQ++;
    }
    Glt[Gu] = '\0';
}

int main(int dcR, char* qtPx[]) {
    if (dcR < 2) return 0;
    Okx(qtPx[1]);
    printf("%s\n", qtPx[1]);
    return 0;
}