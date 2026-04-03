/**
 * LGL-DynT4 Dataset - Function: CaesarCipher
 * -----------------------------------------
 * File: A11_F49_O_A01_VarSplitting.c
 * Implementation Logic: A11_F49_O_A01_VarSplitting
 * Input Format: <string> <shift_int>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void CaesarCipher(char *str, int shift) {

    int s1 = shift % 26;
    int s2 = 52;
    int fs = (s1 + s2) % 26;
    for(int k=0; str[k]; k++) {
        if(str[k] >= 97 && str[k] <= 122) str[k] = (str[k]-97+fs)%26+97;
        else if(str[k] >= 65 && str[k] <= 90) str[k] = (str[k]-65+fs)%26+65;
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
