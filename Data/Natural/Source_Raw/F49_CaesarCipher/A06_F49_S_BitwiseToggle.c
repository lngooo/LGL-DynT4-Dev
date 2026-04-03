/**
 * LGL-DynT4 Dataset - Function: CaesarCipher
 * -----------------------------------------
 * File: A06_F49_S_BitwiseToggle.c
 * Implementation Logic: A06_F49_S_BitwiseToggle
 * Input Format: <string> <shift_int>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void CaesarCipher(char *str, int shift) {

    int s = (shift % 26 + 26) % 26;
    for(int i=0; str[i]; i++) {
        char mask = str[i] & 32;
        char c = str[i] & ~32;
        if(c >= 'A' && c <= 'Z') {
            str[i] = ((c - 'A' + s) % 26 + 'A') | mask;
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
