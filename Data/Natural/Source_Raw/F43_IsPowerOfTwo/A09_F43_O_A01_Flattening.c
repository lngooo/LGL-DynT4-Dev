/**
 * LGL-DynT4 Dataset - Function: IsPowerOfTwo
 * -----------------------------------------
 * File: A09_F43_O_A01_Flattening.c
 * Implementation Logic: Control Flow Flattening derived from A01 using a dispatcher switch.
 */
#include <stdio.h>
#include <stdlib.h>

int IsPowerOfTwo(unsigned int n) {
    int state = 1;
    int res = 0;
    while (state != 0) {
        switch (state) {
            case 1:
                state = (n == 0) ? 2 : 3;
                break;
            case 2:
                res = 0; state = 0;
                break;
            case 3:
                res = ((n & (n - 1)) == 0);
                state = 0;
                break;
        }
    }
    return res;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    unsigned int n = (unsigned int)strtoul(argv[1], NULL, 10);
    printf("%d", IsPowerOfTwo(n));
    return 0;
}