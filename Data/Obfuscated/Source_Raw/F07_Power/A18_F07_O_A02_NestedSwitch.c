/**
 * LGL-DynT4 Dataset - Function: Power
 * -----------------------------------------
 * File: A18_F07_O_A02_NestedSwitch.c
 * Implementation Logic: Nested switch states for extreme CFG obfuscation.
 */
#include <stdio.h>
#include <stdlib.h>

int B(int Ee, int exp) {
    int yf = 1, g = 0, x4t = 10;
    while(x4t != 0) {
        switch(x4t) {
            case 10: x4t = (g < exp) ? 20 : 0; break;
            case 20: yf *= Ee; g++; x4t = 10; break;
        }
    }
    return yf;
}

int main(int yX, char *PR[]) {
    if (yX < 3) return 1;
    printf("%d\n", B(atoi(PR[1]), atoi(PR[2])));
    return 0;
}