/**
 * LGL-DynT4 Dataset - Function: HexToInt
 * -----------------------------------------
 * File: A08_F40_O_A01_Flattening.c
 * Implementation Logic: Control Flow Flattening of A01.
 */
#include <stdio.h>

int HexToInt(const char* s) {
    int res = 0, state = 1;
    while (state != 0) {
        switch(state) {
            case 1: if (!*s) state = 0; else state = 2; break;
            case 2: {
                int v = 0; char c = *s;
                if (c >= '0' && c <= '9') v = c - '0';
                else v = (c | 32) - 'a' + 10;
                res = res * 16 + v;
                s++; state = 1;
                break;
            }
        }
    }
    return res;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    printf("%d", HexToInt(argv[1]));
    return 0;
}