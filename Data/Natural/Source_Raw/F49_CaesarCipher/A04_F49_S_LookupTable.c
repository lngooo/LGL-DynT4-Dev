/**
 * LGL-DynT4 Dataset - Function: CaesarCipher
 * -----------------------------------------
 * File: A04_F49_S_LookupTable.c
 * Implementation Logic: A04_F49_S_LookupTable
 * Input Format: <string> <shift_int>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void CaesarCipher(char *str, int shift) {

    char mapL[26], mapU[26];
    int s = (shift % 26 + 26) % 26;
    for(int k=0; k<26; k++) {
        mapL[k] = 'a' + (k + s) % 26;
        mapU[k] = 'A' + (k + s) % 26;
    }
    while(*str) {
        if(*str >= 'a' && *str <= 'z') *str = mapL[*str - 'a'];
        else if(*str >= 'A' && *str <= 'Z') *str = mapU[*str - 'A'];
        str++;
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
