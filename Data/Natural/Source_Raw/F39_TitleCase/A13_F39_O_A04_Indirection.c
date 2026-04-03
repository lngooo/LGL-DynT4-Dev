/**
 * LGL-DynT4 Dataset - Function: TitleCase
 * -----------------------------------------
 * File: A13_F39_O_A04_Indirection.c
 * Implementation Logic: A04 bitwise logic wrapped in nested pointer indirection.
 * Input Format: <string>
 */
#include <stdio.h>

void TitleCase(char* s) {
    char** ptr = &s;
    int flag = 1;
    for (int j = 0; (*ptr)[j]; j++) {
        char* cur = &((*ptr)[j]);
        if (*cur == 32) { flag = 1; continue; }
        if (flag) { if (*cur >= 97) *cur &= 0xDF; flag = 0; }
        else { if (*cur <= 90 && *cur >= 65) *cur |= 0x20; }
    }
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    TitleCase(argv[1]);
    printf("%s", argv[1]);
    return 0;
}