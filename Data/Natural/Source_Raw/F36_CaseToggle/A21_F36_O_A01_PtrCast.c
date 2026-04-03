/**
* LGL-DynT4 Dataset - Function: CaseToggle
* -----------------------------------------
* File: A21_F36_O_A01_PtrCast.c
* Logic: Pointer casting to unsigned char to avoid sign issues derived from A01.
*/
#include <stdio.h>

void CaseToggle(char* s) {
    unsigned char *p = (unsigned char*)s;
    while (*p != 0x00) {
        if (*p >= 0x61 && *p <= 0x7A) *p = *p - 0x20;
        else if (*p >= 0x41 && *p <= 0x5A) *p = *p + 0x20;
        p++;
    }
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    CaseToggle(argv[1]);
    printf("%s\n", argv[1]);
    return 0;
}