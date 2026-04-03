/**
 * LGL-DynT4 Dataset - Function: CaesarCipher
 * -----------------------------------------
 * File: A03_F49_S_Recursive.c
 * Implementation Logic: A03_F49_S_Recursive
 * Input Format: <string> <shift_int>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void CaesarCipher(char *str, int shift) {

    if (*str == '\0') return;
    int s = (shift % 26 + 26) % 26;
    if (*str >= 'A' && *str <= 'Z') *str = (*str - 'A' + s) % 26 + 'A';
    else if (*str >= 'a' && *str <= 'z') *str = (*str - 'a' + s) % 26 + 'a';
    CaesarCipher(str + 1, shift);
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
