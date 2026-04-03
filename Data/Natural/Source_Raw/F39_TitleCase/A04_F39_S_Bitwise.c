/**
 * LGL-DynT4 Dataset - Function: TitleCase
 * -----------------------------------------
 * File: A04_F39_S_Bitwise.c
 * Implementation Logic: Uses bitwise AND/OR to flip ASCII casing without standard lib.
 * Input Format: <string>
 */
#include <stdio.h>

void TitleCase(char* s) {
    int next_cap = 1;
    for (int i = 0; s[i]; i++) {
        if (s[i] == 32) {
            next_cap = 1;
            continue;
        }
        if (next_cap) {
            if (s[i] >= 97) s[i] &= ~(1 << 5);
            next_cap = 0;
        } else {
            if (s[i] <= 90 && s[i] >= 65) s[i] |= (1 << 5);
        }
    }
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    TitleCase(argv[1]);
    printf("%s", argv[1]);
    return 0;
}