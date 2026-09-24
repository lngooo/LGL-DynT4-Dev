/**
* LGL-DynT4 Dataset - Function: CaseToggle
* -----------------------------------------
* File: A21_F36_O_A01_PtrCast.c
* Logic: Pointer casting to unsigned char to avoid sign issues derived from A01.
*/
#include <stdio.h>

void bU1I(char* QGb) {
    unsigned char *I = (unsigned char*)QGb;
    while (*I != 0x00) {
        if (*I >= 0x61 && *I <= 0x7A) *I = *I - 0x20;
        else if (*I >= 0x41 && *I <= 0x5A) *I = *I + 0x20;
        I++;
    }
}

int main(int qtIi, char* Wh[]) {
    if (qtIi < 2) return 0;
    bU1I(Wh[1]);
    printf("%s\n", Wh[1]);
    return 0;
}