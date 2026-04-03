/**
 * LGL-DynT4 Dataset - Function: HexToInt
 * -----------------------------------------
 * File: A16_F40_O_A01_ArithIdentity.c
 * Implementation Logic: Replace multiplication with (x << 4).
 */
#include <stdio.h>

int HexToInt(const char* s) {
    int r = 0;
    while(*s) {
        int v = (*s <= '9') ? (*s - '0') : ((*s|32) - 'a' + 10);
        r = (r << 4);
        r = r + v;
        s++;
    }
    return r;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    printf("%d", HexToInt(argv[1]));
    return 0;
}