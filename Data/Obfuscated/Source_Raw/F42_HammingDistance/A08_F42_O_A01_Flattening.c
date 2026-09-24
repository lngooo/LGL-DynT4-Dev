/**
 * LGL-DynT4 Dataset - Function: HammingDistance
 * -----------------------------------------
 * File: A08_F42_O_A01_Flattening.c
 * Implementation Logic: Control flow flattening using a switch-case state machine derived from A01.
 * Input Format: <uint1> <uint2>
 */
#include <stdio.h>
#include <stdlib.h>

int M(unsigned int Uins, unsigned int hN) {
    unsigned int T7 = Uins ^ hN;
    int Zjle = 0;
    int lb = 0;
    while (lb != -1) {
        switch (lb) {
            case 0:
                if (T7 > 0) lb = 1; else lb = -1;
                break;
            case 1:
                if (T7 & 1) Zjle++;
                T7 >>= 1;
                lb = 0;
                break;
        }
    }
    return Zjle;
}

int main(int Sec, char* kNq[]) {
    if (Sec < 3) return 0;
    unsigned int Yh = (unsigned int)strtoul(kNq[1], NULL, 10);
    unsigned int UF8 = (unsigned int)strtoul(kNq[2], NULL, 10);
    printf("%d", M(Yh, UF8));
    return 0;
}