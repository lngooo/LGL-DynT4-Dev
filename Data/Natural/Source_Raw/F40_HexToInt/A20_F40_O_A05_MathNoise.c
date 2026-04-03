/**
 * LGL-DynT4 Dataset - Function: HexToInt
 * -----------------------------------------
 * File: A20_F40_O_A05_MathNoise.c
 * Implementation Logic: Power of 16 calculated via loop.
 */
#include <stdio.h>
#include <string.h>

int HexToInt(const char* s) {
    int len = (int)strlen(s), res = 0;
    for(int i=0; i<len; i++) {
        int v = (s[i]|32); v = (v >= 'a') ? (v-'a'+10) : (v-'0');
        int p = 1;
        for(int j=0; j<(len-1-i); j++) p *= 16;
        res += v * p;
    }
    return res;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    printf("%d", HexToInt(argv[1]));
    return 0;
}