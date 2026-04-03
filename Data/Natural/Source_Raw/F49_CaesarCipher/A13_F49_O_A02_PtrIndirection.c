/**
 * LGL-DynT4 Dataset - Function: CaesarCipher
 * -----------------------------------------
 * File: A13_F49_O_A02_PtrIndirection.c
 * Implementation Logic: A13_F49_O_A02_PtrIndirection
 * Input Format: <string> <shift_int>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void CaesarCipher(char *str, int shift) {

    char *p = str;
    int s = (shift % 26 + 26) % 26;
    while(*p != 0) {
        char **pp = &p;
        if(**pp >= 'A' && **pp <= 'Z') **pp = (**pp - 'A' + s) % 26 + 'A';
        else if(**pp >= 'a' && **pp <= 'z') **pp = (**pp - 'a' + s) % 26 + 'a';
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
