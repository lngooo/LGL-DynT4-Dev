/**
 * LGL-DynT4 Dataset - Function: HexToInt
 * -----------------------------------------
 * File: A01_F40_S_Accumulate.c
 * Implementation Logic: Standard iterative approach multiplying by 16 for each digit.
 * Input Format: <hex_string>
 */
#include <stdio.h>
#include <ctype.h>

int HexToInt(const char* s) {
    int res = 0;
    while (*s) {
        char c = *s++;
        int val = 0;
        if (c >= '0' && c <= '9') val = c - '0';
        else if (c >= 'a' && c <= 'f') val = c - 'a' + 10;
        else if (c >= 'A' && c <= 'F') val = c - 'A' + 10;
        res = res * 16 + val;
    }
    return res;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    printf("%d", HexToInt(argv[1]));
    return 0;
}