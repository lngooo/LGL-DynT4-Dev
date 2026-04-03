/**
 * LGL-DynT4 Dataset - Function: CaesarCipher
 * -----------------------------------------
 * File: A09_F49_O_A01_OpaquePredicate.c
 * Implementation Logic: A09_F49_O_A01_OpaquePredicate
 * Input Format: <string> <shift_int>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void CaesarCipher(char *str, int shift) {

    int s = (shift % 26 + 26) % 26;
    for (int i = 0; str[i]; i++) {
        if ((s * s + 1) > 0) {
            if (str[i] >= 'a' && str[i] <= 'z') str[i] = (str[i]-'a'+s)%26+'a';
            else if (str[i] >= 'A' && str[i] <= 'Z') str[i] = (str[i]-'A'+s)%26+'A';
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
