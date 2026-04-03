/**
 * LGL-DynT4 Dataset - Function: HexToInt
 * -----------------------------------------
 * File: A07_F40_S_Switch.c
 * Implementation Logic: Uses a large switch statement for character conversion logic.
 * Input Format: <hex_string>
 */
#include <stdio.h>

int HexToInt(const char* s) {
    int res = 0;
    while(*s) {
        int v;
        switch(*s) {
            case 'a': case 'A': v = 10; break;
            case 'b': case 'B': v = 11; break;
            case 'c': case 'C': v = 12; break;
            case 'd': case 'D': v = 13; break;
            case 'e': case 'E': v = 14; break;
            case 'f': case 'F': v = 15; break;
            default: v = *s - '0'; break;
        }
        res = res * 16 + v;
        s++;
    }
    return res;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    printf("%d", HexToInt(argv[1]));
    return 0;
}