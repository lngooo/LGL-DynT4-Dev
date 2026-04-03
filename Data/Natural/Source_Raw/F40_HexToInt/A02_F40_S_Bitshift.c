/**
 * LGL-DynT4 Dataset - Function: HexToInt
 * -----------------------------------------
 * File: A02_F40_S_Bitshift.c
 * Implementation Logic: Uses bitwise left shift (<< 4) instead of multiplication by 16.
 * Input Format: <hex_string>
 */
#include <stdio.h>

int HexToInt(const char* s) {
    int res = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        int v = 0;
        char c = s[i];
        if (c <= 57) v = c - 48;
        else v = (c | 32) - 87;
        res = (res << 4) | v;
    }
    return res;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    printf("%d", HexToInt(argv[1]));
    return 0;
}