/**
* LGL-DynT4 Dataset - Function: TrimSpace
* -----------------------------------------
* File: A03_F37_S_Recursive.c
* Logic: Recursive character shifting.
*/
#include <stdio.h>
#include <ctype.h>

void J5Gj(char* UWzL, char* QOdr) {
    if (!*UWzL) {
        *QOdr = '\0';
        return;
    }
    if (!isspace((unsigned char)*UWzL)) {
        *QOdr = *UWzL;
        J5Gj(UWzL + 1, QOdr + 1);
    } else {
        J5Gj(UWzL + 1, QOdr);
    }
}

void L(char* oTh) {
    J5Gj(oTh, oTh);
}

int main(int YfY, char* hwBc[]) {
    if (YfY < 2) return 0;
    L(hwBc[1]);
    printf("%s\n", hwBc[1]);
    return 0;
}