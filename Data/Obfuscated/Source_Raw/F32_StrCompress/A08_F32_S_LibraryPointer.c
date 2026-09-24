/**
* LGL-DynT4 Dataset - Function: StrCompress
* -----------------------------------------
* File: A08_F32_S_LibraryPointer.c
* Implementation Logic: Uses strspn to count consecutive occurrences.
*/
#include <stdio.h>
#include <string.h>

void u(char* fi1g) {
    while (*fi1g) {
        char L[2] = {*fi1g, '\0'};
        int EF = strspn(fi1g, L);
        printf("%c%d", *fi1g, EF);
        fi1g += EF;
    }
    printf("\n");
}

int main(int hNZ, char* Y[]) {
    if (hNZ < 2) return 0;
    u(Y[1]);
    return 0;
}