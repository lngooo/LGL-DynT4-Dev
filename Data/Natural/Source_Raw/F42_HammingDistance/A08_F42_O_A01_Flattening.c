/**
 * LGL-DynT4 Dataset - Function: HammingDistance
 * -----------------------------------------
 * File: A08_F42_O_A01_Flattening.c
 * Implementation Logic: Control flow flattening using a switch-case state machine derived from A01.
 * Input Format: <uint1> <uint2>
 */
#include <stdio.h>
#include <stdlib.h>

int HammingDistance(unsigned int x, unsigned int y) {
    unsigned int diff = x ^ y;
    int dist = 0;
    int state = 0;
    while (state != -1) {
        switch (state) {
            case 0:
                if (diff > 0) state = 1; else state = -1;
                break;
            case 1:
                if (diff & 1) dist++;
                diff >>= 1;
                state = 0;
                break;
        }
    }
    return dist;
}

int main(int argc, char* argv[]) {
    if (argc < 3) return 0;
    unsigned int a = (unsigned int)strtoul(argv[1], NULL, 10);
    unsigned int b = (unsigned int)strtoul(argv[2], NULL, 10);
    printf("%d", HammingDistance(a, b));
    return 0;
}