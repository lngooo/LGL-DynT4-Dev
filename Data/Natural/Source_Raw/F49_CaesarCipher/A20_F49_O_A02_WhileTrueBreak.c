/**
 * LGL-DynT4 Dataset - Function: CaesarCipher
 * -----------------------------------------
 * File: A20_F49_O_A02_WhileTrueBreak.c
 * Implementation Logic: A20_F49_O_A02_WhileTrueBreak
 * Input Format: <string> <shift_int>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void CaesarCipher(char *str, int shift) {

    char *p = str;
    int s = (shift % 26 + 26) % 26;
    while(1) {
        if(*p == 0) break;
        if(*p >= 'A' && *p <= 'Z') *p = (*p - 'A' + s) % 26 + 'A';
        else if(*p >= 'a' && *p <= 'z') *p = (*p - 'a' + s) % 26 + 'a';
        p++;
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
