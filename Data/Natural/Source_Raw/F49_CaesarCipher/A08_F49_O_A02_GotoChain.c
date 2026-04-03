/**
 * LGL-DynT4 Dataset - Function: CaesarCipher
 * -----------------------------------------
 * File: A08_F49_O_A02_GotoChain.c
 * Implementation Logic: A08_F49_O_A02_GotoChain
 * Input Format: <string> <shift_int>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void CaesarCipher(char *str, int shift) {

    char *curr = str;
    int s = (shift % 26 + 26) % 26;
    LOOP: if (!*curr) goto END;
    if (*curr >= 'A' && *curr <= 'Z') { *curr = (*curr - 'A' + s) % 26 + 'A'; goto NEXT; }
    if (*curr >= 'a' && *curr <= 'z') *curr = (*curr - 'a' + s) % 26 + 'a';
    NEXT: curr++; goto LOOP;
    END: ;
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
