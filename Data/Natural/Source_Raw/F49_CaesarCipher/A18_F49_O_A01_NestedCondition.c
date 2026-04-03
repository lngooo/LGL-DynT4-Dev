/**
 * LGL-DynT4 Dataset - Function: CaesarCipher
 * -----------------------------------------
 * File: A18_F49_O_A01_NestedCondition.c
 * Implementation Logic: A18_F49_O_A01_NestedCondition
 * Input Format: <string> <shift_int>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void CaesarCipher(char *str, int shift) {

    int s = (shift % 26 + 26) % 26;
    for(int i=0; str[i]; i++) {
        if(str[i] >= 'A') {
            if(str[i] <= 'Z') str[i] = (str[i]-'A'+s)%26+'A';
            else if(str[i] >= 'a') {
                if(str[i] <= 'z') str[i] = (str[i]-'a'+s)%26+'a';
            }
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
