/**
 * LGL-DynT4 Dataset - Function: CaesarCipher
 * -----------------------------------------
 * File: A17_F49_O_A03_RecursiveGoto.c
 * Implementation Logic: A17_F49_O_A03_RecursiveGoto
 * Input Format: <string> <shift_int>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void CaesarCipher(char *str, int shift) {

    int s = (shift % 26 + 26) % 26;
    int idx = 0;
    RE: if (str[idx] == 0) goto END;
    if (str[idx] >= 'a' && str[idx] <= 'z') str[idx] = (str[idx]-'a'+s)%26+'a';
    else if (str[idx] >= 'A' && str[idx] <= 'Z') str[idx] = (str[idx]-'A'+s)%26+'A';
    idx++; goto RE;
    END:;
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
