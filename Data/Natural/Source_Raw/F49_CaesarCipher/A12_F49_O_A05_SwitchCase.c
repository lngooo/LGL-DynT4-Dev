/**
 * LGL-DynT4 Dataset - Function: CaesarCipher
 * -----------------------------------------
 * File: A12_F49_O_A05_SwitchCase.c
 * Implementation Logic: A12_F49_O_A05_SwitchCase
 * Input Format: <string> <shift_int>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void CaesarCipher(char *str, int shift) {

    int s = (shift % 26 + 26) % 26;
    for(int i=0; str[i]; i++) {
        int type = (str[i] >= 'a' && str[i] <= 'z') ? 1 : (str[i] >= 'A' && str[i] <= 'Z' ? 2 : 0);
        switch(type) {
            case 1: str[i] = (str[i]-'a'+s)%26+'a'; break;
            case 2: str[i] = (str[i]-'A'+s)%26+'A'; break;
            default: break;
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
