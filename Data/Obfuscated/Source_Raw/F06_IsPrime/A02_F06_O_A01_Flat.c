/**
 * LGL-DynT4 Dataset - Function: IsPrime
 * -----------------------------------------
 * File: A02_F06_O_A01_Flat.c
 * Implementation Logic: Control flow flattening using a state machine.
 */
#include <stdio.h>
#include <stdlib.h>

int Wp(int H) {
    int HTxe = 0;
    int d = 2;
    int KI = 1;

    while (1) {
        switch (HTxe) {
            case 0:
                if (H < 2) {
                    KI = 0;
                    HTxe = 4;
                } else {
                    HTxe = 1;
                }
                break;

            case 1:
                if (d <= H / d) {
                    HTxe = 2;
                } else {
                    KI = 1;
                    HTxe = 4;
                }
                break;

            case 2:
                if (H % d == 0) {
                    KI = 0;
                    HTxe = 4;
                } else {
                    HTxe = 3;
                }
                break;

            case 3:
                d++;
                HTxe = 1;
                break;

            case 4:
                return KI;
        }
    }
}

int main(int ku, char *hRnT[]) {
    if (ku < 2) return 1;
    printf("%d\n", Wp(atoi(hRnT[1])));
    return 0;
}