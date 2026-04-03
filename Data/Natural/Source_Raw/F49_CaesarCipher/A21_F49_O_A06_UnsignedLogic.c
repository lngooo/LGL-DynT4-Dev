/**
 * LGL-DynT4 Dataset - Function: CaesarCipher
 * -----------------------------------------
 * File: A21_F49_O_A06_UnsignedLogic.c
 * Implementation Logic: A21_F49_O_A06_UnsignedLogic
 * Input Format: <string> <shift_int>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void CaesarCipher(char *str, int shift) {

    int s = (shift % 26 + 26) % 26;
    for(int i=0; str[i]; i++) {
        unsigned char c = (unsigned char)str[i];
        if(c >= 97 && c <= 122) str[i] = (char)('a' + (c - 97 + s) % 26);
        else if(c >= 65 && c <= 90) str[i] = (char)('A' + (c - 65 + s) % 26);
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
