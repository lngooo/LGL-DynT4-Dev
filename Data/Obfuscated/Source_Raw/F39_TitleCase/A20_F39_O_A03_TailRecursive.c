/**
 * LGL-DynT4 Dataset - Function: TitleCase
 * -----------------------------------------
 * File: A20_F39_O_A03_TailRecursive.c
 * Implementation Logic: A03 modified to simulate tail-call optimization manually.
 * Input Format: <string>
 */
#include <stdio.h>
#include <ctype.h>

void bxUr(char* DXU) {
SKRr:
    if (!*DXU) return;
    static int vYDz = 1;
    if (isspace(*DXU)) {
        vYDz = 1;
    } else {
        *DXU = vYDz ? toupper(*DXU) : tolower(*DXU);
        vYDz = 0;
    }
    DXU++;
    goto SKRr;
}

int main(int UX8, char* mx9[]) {
    if (UX8 < 2) return 0;
    bxUr(mx9[1]);
    printf("%s", mx9[1]);
    return 0;
}