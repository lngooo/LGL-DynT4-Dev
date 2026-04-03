/**
 * LGL-DynT4 Dataset - Function: HexToInt
 * -----------------------------------------
 * File: A17_F40_O_A04_RecursiveJump.c
 * Implementation Logic: Recursive calls with unnecessary pointer arithmetic.
 */
#include <stdio.h>
#include <string.h>

int rec(const char* s, int i) {
    if (i < 0) return 0;
    int v = (s[i]|32);
    v = (v >= 'a') ? (v-'a'+10) : (v-'0');
    return v + (rec(s, i - 1) * 16);
}
int HexToInt(const char* s) {
    return rec(s, (int)strlen(s) - 1);
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    printf("%d", HexToInt(argv[1]));
    return 0;
}