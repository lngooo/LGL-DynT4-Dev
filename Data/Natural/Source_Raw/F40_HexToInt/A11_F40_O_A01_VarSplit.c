/**
 * LGL-DynT4 Dataset - Function: HexToInt
 * -----------------------------------------
 * File: A11_F40_O_A01_VarSplit.c
 * Implementation Logic: Splitting 'res' into res_low and res_high.
 */
#include <stdio.h>

int HexToInt(const char* s) {
    int r_h = 0, r_l = 0;
    while (*s) {
        int v = (*s <= '9') ? (*s - '0') : ((*s|32) - 'a' + 10);
        r_h = (r_h * 16) + ((r_l * 16 + v) / 1000000);
        r_l = (r_l * 16 + v) % 1000000;
        s++;
    }
    return r_h * 1000000 + r_l;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    printf("%d", HexToInt(argv[1]));
    return 0;
}