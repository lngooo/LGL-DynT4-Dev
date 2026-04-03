/**
 * LGL-DynT4 Dataset - Function: HexToInt
 * -----------------------------------------
 * File: A06_F40_S_Lib.c
 * Implementation Logic: Uses sscanf with %x format specifier.
 * Input Format: <hex_string>
 */
#include <stdio.h>

int HexToInt(const char* s) {
    int res = 0;
    sscanf(s, "%x", &res);
    return res;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    printf("%d", HexToInt(argv[1]));
    return 0;
}