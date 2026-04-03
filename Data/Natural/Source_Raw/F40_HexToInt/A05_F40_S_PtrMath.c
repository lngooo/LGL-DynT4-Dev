/**
 * LGL-DynT4 Dataset - Function: HexToInt
 * -----------------------------------------
 * File: A05_F40_S_PtrMath.c
 * Implementation Logic: Calculates power of 16 based on pointer distance from end.
 * Input Format: <hex_string>
 */
#include <stdio.h>
#include <string.h>

int HexToInt(const char* s) {
    int len = (int)strlen(s);
    int res = 0;
    int base = 1;
    for (int i = len - 1; i >= 0; i--) {
        int v = (s[i] | 32);
        v = (v >= 'a') ? (v - 'a' + 10) : (v - '0');
        res += v * base;
        base *= 16;
    }
    return res;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    printf("%d", HexToInt(argv[1]));
    return 0;
}