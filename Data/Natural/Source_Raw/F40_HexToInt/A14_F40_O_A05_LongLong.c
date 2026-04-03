/**
 * LGL-DynT4 Dataset - Function: HexToInt
 * -----------------------------------------
 * File: A14_F40_O_A05_LongLong.c
 * Implementation Logic: Uses long long for intermediate base calculations.
 */
#include <stdio.h>
#include <string.h>

int HexToInt(const char* s) {
    int n = (int)strlen(s);
    long long total = 0;
    long long b = 1;
    for(int i = n - 1; i >= 0; i--) {
        int val = (s[i] >= 'a') ? (s[i]-'a'+10) : ((s[i]>='A')?(s[i]-'A'+10):(s[i]-'0'));
        total += (long long)val * b;
        b *= 16;
    }
    return (int)total;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    printf("%d", HexToInt(argv[1]));
    return 0;
}