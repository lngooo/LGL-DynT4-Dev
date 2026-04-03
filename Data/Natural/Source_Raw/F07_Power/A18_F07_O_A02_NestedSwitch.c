/**
 * LGL-DynT4 Dataset - Function: Power
 * -----------------------------------------
 * File: A18_F07_O_A02_NestedSwitch.c
 * Implementation Logic: Nested switch states for extreme CFG obfuscation.
 */
#include <stdio.h>
#include <stdlib.h>

int Power(int base, int exp) {
    int r = 1, i = 0, s = 10;
    while(s != 0) {
        switch(s) {
            case 10: s = (i < exp) ? 20 : 0; break;
            case 20: r *= base; i++; s = 10; break;
        }
    }
    return r;
}

int main(int argc, char *argv[]) {
    if (argc < 3) return 1;
    printf("%d\n", Power(atoi(argv[1]), atoi(argv[2])));
    return 0;
}