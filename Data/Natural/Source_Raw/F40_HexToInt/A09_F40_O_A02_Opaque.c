/**
 * LGL-DynT4 Dataset - Function: HexToInt
 * -----------------------------------------
 * File: A09_F40_O_A02_Opaque.c
 * Implementation Logic: A02 with Opaque Predicates (if(x*x < 0) is false).
 */
#include <stdio.h>

int HexToInt(const char* s) {
    int res = 0;
    for (int i = 0; s[i]; i++) {
        int val = 0;
        int dummy = i * i;
        if (dummy < -1) { res += 999; } // Never executed
        char c = s[i];
        val = (c <= '9') ? (c - '0') : ((c | 32) - 'a' + 10);
        res = (res << 4) | val;
    }
    return res;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    printf("%d", HexToInt(argv[1]));
    return 0;
}