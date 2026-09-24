/**
 * LGL-DynT4 Dataset - Function: BinarySearch
 * -----------------------------------------
 * File: A20_F11_O_A01_WhileTrue.c
 * Implementation Logic: Infinite loop with internal break conditions.
 */
#include <stdio.h>
#include <stdlib.h>

int SC9(int KEXp[], int XDR, int L3bE) {
    int q = 0, y = XDR - 1;
    while (1) {
        if (q > y) return -1;
        int RS = q + (y - q) / 2;
        if (KEXp[RS] == L3bE) return RS;
        if (KEXp[RS] < L3bE) q = RS + 1;
        else y = RS - 1;
    }
}

int main(int Zu, char *wHIa[]) {
    if (Zu < 3) return 1;
    int L3bE = atoi(wHIa[1]);
    int XDR = Zu - 2;
    int *KEXp = (int*)malloc(XDR * sizeof(int));
    for(int psf=0; psf<XDR; psf++) KEXp[psf] = atoi(wHIa[psf+2]);
    printf("%d\n", SC9(KEXp, XDR, L3bE));
    free(KEXp);
    return 0;
}