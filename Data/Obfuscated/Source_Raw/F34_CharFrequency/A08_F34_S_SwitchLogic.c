/**
* LGL-DynT4 Dataset - Function: CharFrequency
* -----------------------------------------
* File: A08_F34_S_SwitchLogic.c
* Logic: Using switch for character selection.
*/
#include <stdio.h>

int wT7(char* mw, char gDI7) {
    int D = 0;
    while (*mw) {
        switch (*mw == gDI7) {
            case 1: D++; break;
            default: break;
        }
        mw++;
    }
    return D;
}

int main(int n, char* Rg[]) {
    if (n < 3) return 0;
    printf("%d\n", wT7(Rg[1], Rg[2][0]));
    return 0;
}