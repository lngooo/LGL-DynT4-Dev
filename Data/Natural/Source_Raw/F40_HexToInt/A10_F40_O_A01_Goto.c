/**
 * LGL-DynT4 Dataset - Function: HexToInt
 * -----------------------------------------
 * File: A10_F40_O_A01_Goto.c
 * Implementation Logic: Loop decomposition using goto labels.
 */
#include <stdio.h>

int HexToInt(const char* s) {
    int res = 0;
start:
    if (!*s) goto end;
    int v = 0;
    if (*s >= '0' && *s <= '9') v = *s - '0';
    else v = (*s | 32) - 'a' + 10;
    res = res * 16 + v;
    s++;
    goto start;
end:
    return res;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    printf("%d", HexToInt(argv[1]));
    return 0;
}