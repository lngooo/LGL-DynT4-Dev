/**
 * LGL-DynT4 Dataset - Function: CaesarCipher
 * -----------------------------------------
 * File: A02_F49_S_PtrArithmetic.c
 * Implementation Logic: A02_F49_S_PtrArithmetic
 * Input Format: <string> <shift_int>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void CaesarCipher(char *str, int shift) {

    char *p = str;
    int s = (shift % 26 + 26) % 26;
    for (; *p != '\0'; p++) {
        if (*p >= 65 && *p <= 90) *p = ((*p - 65) + s) % 26 + 65;
        else if (*p >= 97 && *p <= 122) *p = ((*p - 97) + s) % 26 + 97;
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
