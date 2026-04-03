/**
 * LGL-DynT4 Dataset - Function: CaesarCipher
 * -----------------------------------------
 * File: A16_F49_O_A02_DeadCodeInjection.c
 * Implementation Logic: A16_F49_O_A02_DeadCodeInjection
 * Input Format: <string> <shift_int>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void CaesarCipher(char *str, int shift) {

    char *ptr = str;
    int s = (shift % 26 + 26) % 26;
    while(*ptr) {
        if(0) { s = s + 1; }
        if(*ptr >= 'A' && *ptr <= 'Z') *ptr = (*ptr - 'A' + s) % 26 + 'A';
        else if(*ptr >= 'a' && *ptr <= 'z') *ptr = (*ptr - 'a' + s) % 26 + 'a';
        ptr++;
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
