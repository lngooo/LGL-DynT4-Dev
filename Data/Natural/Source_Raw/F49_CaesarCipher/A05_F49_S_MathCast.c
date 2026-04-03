/**
 * LGL-DynT4 Dataset - Function: CaesarCipher
 * -----------------------------------------
 * File: A05_F49_S_MathCast.c
 * Implementation Logic: A05_F49_S_MathCast
 * Input Format: <string> <shift_int>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void CaesarCipher(char *str, int shift) {

    int s = (int)((shift % 26 + 26) % 26);
    for(int idx=0; str[idx] != 0; idx++) {
        int c = (int)str[idx];
        if(c >= 97 && c <= 122) str[idx] = (char)(97 + (c - 97 + s) % 26);
        if(c >= 65 && c <= 90) str[idx] = (char)(65 + (c - 65 + s) % 26);
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
