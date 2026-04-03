/**
 * LGL-DynT4 Dataset - Function: CaesarCipher
 * -----------------------------------------
 * File: A19_F49_O_A04_ArrayPtrAccess.c
 * Implementation Logic: A19_F49_O_A04_ArrayPtrAccess
 * Input Format: <string> <shift_int>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void CaesarCipher(char *str, int shift) {

    int s = (shift % 26 + 26) % 26;
    char alph[] = "abcdefghijklmnopqrstuvwxyz";
    char ALPH[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for(int i=0; str[i]; i++) {
        for(int j=0; j<26; j++) {
            if(str[i] == alph[j]) { str[i] = alph[(j+s)%26]; break; }
            if(str[i] == ALPH[j]) { str[i] = ALPH[(j+s)%26]; break; }
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
