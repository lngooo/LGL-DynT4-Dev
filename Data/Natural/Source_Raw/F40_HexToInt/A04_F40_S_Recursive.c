/**
 * LGL-DynT4 Dataset - Function: HexToInt
 * -----------------------------------------
 * File: A04_F40_S_Recursive.c
 * Implementation Logic: Converts hex recursively by processing the tail of the string.
 * Input Format: <hex_string>
 */
#include <stdio.h>
#include <string.h>
#include <math.h>

int helper(const char* s, int len) {
    if (len == 0) return 0;
    char c = s[len-1];
    int v = (c >= 'a') ? (c - 'a' + 10) : ((c >= 'A') ? (c - 'A' + 10) : (c - '0'));
    return v + 16 * helper(s, len - 1);
}

int HexToInt(const char* s) {
    return helper(s, (int)strlen(s));
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    printf("%d", HexToInt(argv[1]));
    return 0;
}