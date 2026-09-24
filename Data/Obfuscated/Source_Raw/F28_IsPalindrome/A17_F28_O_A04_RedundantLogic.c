/**
 * LGL-DynT4 Dataset - Function: IsPalindrome
 * -----------------------------------------
 * File: A17_F28_O_A04_RedundantLogic.c
 * Implementation Logic: RedundantLogic derived from seed.
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int vxZG(char *ATvi) {
    int UqJ = 0; while (ATvi[UqJ]) UqJ++;
    char Fs[100];
    int f6C = 0;
    while(f6C < UqJ) { Fs[f6C] = ATvi[f6C]; f6C++; }
    f6C--;
    for(int Z = 0; Z < UqJ; Z++) {
        if(Fs[f6C--] != ATvi[Z]) return 0;
    }
    return 1;
}

int main(int G5h, char *ZW[]) {
    if (G5h < 2) return 1;
    char *ATvi = ZW[1];
    int p = vxZG(ATvi);
    printf("%d\n", p);
    return 0;
}