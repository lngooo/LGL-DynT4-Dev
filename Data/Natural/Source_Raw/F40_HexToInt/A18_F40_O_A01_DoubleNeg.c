/**
 * LGL-DynT4 Dataset - Function: HexToInt
 * -----------------------------------------
 * File: A18_F40_O_A01_DoubleNeg.c
 * Implementation Logic: Uses double negation logic in conditions.
 */
#include <stdio.h>

int HexToInt(const char* s) {
    int res = 0;
    while (!!*s) {
        int v = 0;
        if (!(*s < '0' || *s > '9')) v = *s - '0';
        else v = (*s | 32) - 'a' + 10;
        res = (res * 16) + v;
        s++;
    }
    return res;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    printf("%d", HexToInt(argv[1]));
    return 0;
}