/**
 * LGL-DynT4 Dataset - Function: HexToInt
 * -----------------------------------------
 * File: A15_F40_O_A07_DecoySwitch.c
 * Implementation Logic: A07 with extra decoy cases in the switch.
 */
#include <stdio.h>

int HexToInt(const char* s) {
    int r = 0;
    while(*s) {
        int v;
        switch(*s) {
            case '0': v=0; break; case '1': v=1; break; case '2': v=2; break;
            case 'a': case 'A': v=10; break; case 'f': case 'F': v=15; break;
            case 'z': v=-1; break; // Decoy
            default: v = *s - '0'; if (v > 9) v = (*s|32) - 'a' + 10; break;
        }
        r = (r * 16) + v; s++;
    }
    return r;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    printf("%d", HexToInt(argv[1]));
    return 0;
}