/**
 * LGL-DynT4 Dataset - Function: CaesarCipher
 * -----------------------------------------
 * File: A10_F49_O_A04_RedundantLogic.c
 * Implementation Logic: A10_F49_O_A04_RedundantLogic
 * Input Format: <string> <shift_int>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void CaesarCipher(char *str, int shift) {

    int s = (shift % 26 + 26) % 26;
    for(int i=0; str[i]; i++) {
        int v = str[i];
        int isL = (v >= 'a' && v <= 'z');
        int isU = (v >= 'A' && v <= 'Z');
        if(isL) str[i] = (char)('a' + (v - 'a' + s) % 26);
        if(isU) str[i] = (char)('A' + (v - 'A' + s) % 26);
        if(!isL && !isU) str[i] = str[i];
    }
}

int main(int argc, char *argv[]) {
    if (argc < 3) {
        return 1;
    }
    int shift = atoi(argv[2]);
    CaesarCipher(argv[1], shift);
    printf("%s\n", argv[1]);
    return 0;
}
