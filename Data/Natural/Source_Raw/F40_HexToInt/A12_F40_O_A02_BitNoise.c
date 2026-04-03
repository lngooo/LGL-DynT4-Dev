/**
 * LGL-DynT4 Dataset - Function: HexToInt
 * -----------------------------------------
 * File: A12_F40_O_A02_BitNoise.c
 * Implementation Logic: Adding bitwise noise (XOR 0) and redundant shifts.
 */
#include <stdio.h>

int HexToInt(const char* s) {
    int r = 0;
    for (int i = 0; s[i]; i++) {
        int v = (s[i] <= 57) ? (s[i] - 48) : ((s[i]|32)-87);
        r = ((r << 2) << 2) ^ 0;
        r = r | (v & 0xFF);
    }
    return r;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    printf("%d", HexToInt(argv[1]));
    return 0;
}