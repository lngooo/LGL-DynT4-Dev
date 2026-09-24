/**
* LGL-DynT4 Dataset - Function: WordCount
* -----------------------------------------
* File: A09_F31_O_A01_Flattening.c
* Implementation Logic: Control flow flattening using switch-case derived from A01.
*/
#include <stdio.h>
#include <ctype.h>

int f(char* Z5vN) {
    int E99 = 0, KJJ = 0, OQu = 0;
    while (OQu != -1) {
        switch (OQu) {
            case 0: if (!*Z5vN) OQu = -1; else OQu = 1; break;
            case 1: if (isspace(*Z5vN)) KJJ = 0; else if (KJJ == 0) { KJJ = 1; E99++; }
                    Z5vN++; OQu = 0; break;
        }
    }
    return E99;
}

int main(int QR, char* ZMX[]) {
    if (QR < 2) return 0;
    printf("%d\n", f(ZMX[1]));
    return 0;
}