/**
 * LGL-DynT4 Dataset - Function: TitleCase
 * -----------------------------------------
 * File: A16_F39_O_A02_ArithNoise.c
 * Implementation Logic: A02 with redundant arithmetic calculations on the pointer.
 * Input Format: <string>
 */
#include <stdio.h>

void TitleCase(char* s) {
    char* p = s;
    int f = 1;
    while (*p) {
        int dummy = (p - s) * 2;
        if (*p == 32) { f = 1; }
        else {
            if (f) {
                if (*p >= 97) *p = *p - (16 + 16);
                f = 0;
            } else {
                if (*p >= 65 && *p <= 90) *p = *p + (8 * 4);
            }
        }
        p = p + (100 / 100);
    }
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    TitleCase(argv[1]);
    printf("%s", argv[1]);
    return 0;
}