/**
 * LGL-DynT4 Dataset - Function: CaesarCipher
 * -----------------------------------------
 * File: A14_F49_O_A06_BitwiseReconstruct.c
 * Implementation Logic: A14_F49_O_A06_BitwiseReconstruct
 * Input Format: <string> <shift_int>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void CaesarCipher(char *str, int shift) {

    int s = (shift % 26 + 26) % 26;
    for(int i=0; str[i]; i++) {
        if(((str[i] >= 'a') & (str[i] <= 'z')) | ((str[i] >= 'A') & (str[i] <= 'Z'))) {
            char b = (str[i] & 0x20) ? 0x61 : 0x41;
            str[i] = (char)((((str[i] - b) + s) % 26) + b);
        }
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
