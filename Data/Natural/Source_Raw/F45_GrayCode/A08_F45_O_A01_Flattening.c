/**
 * LGL-DynT4 Dataset - Function: GrayCode
 * -----------------------------------------
 * File: A08_F45_O_A01_Flattening.c
 * Implementation Logic: Control Flow Flattening using state machine derived from A01.
 */
#include <stdio.h>
#include <stdlib.h>

unsigned int GrayCode(unsigned int n) {
    unsigned int res;
    int state = 1;
    while (state != 0) {
        switch (state) {
            case 1: res = n ^ (n >> 1); state = 0; break;
        }
    }
    return res;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    unsigned int n = (unsigned int)strtoul(argv[1], NULL, 10);
    printf("%u", GrayCode(n));
    return 0;
}