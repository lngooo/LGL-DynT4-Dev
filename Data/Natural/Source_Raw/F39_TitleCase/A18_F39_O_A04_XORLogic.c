/**
 * LGL-DynT4 Dataset - Function: TitleCase
 * -----------------------------------------
 * File: A18_F39_O_A04_XORLogic.c
 * Implementation Logic: A04 using XOR identities to perform case flipping.
 * Input Format: <string>
 */
#include <stdio.h>

void TitleCase(char* s) {
    int cap = 1;
    for (int i = 0; s[i]; i++) {
        if (s[i] == ' ') { cap = 1; continue; }
        if (cap) {
            if (s[i] >= 'a') s[i] = s[i] ^ 32;
            cap = 0;
        } else {
            if (s[i] >= 'A' && s[i] <= 'Z') s[i] = s[i] ^ 32;
        }
    }
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    TitleCase(argv[1]);
    printf("%s", argv[1]);
    return 0;
}