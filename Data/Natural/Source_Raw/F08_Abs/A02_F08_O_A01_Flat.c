/**
 * LGL-DynT4 Dataset - Function: Abs
 * -----------------------------------------
 * File: A02_F08_O_A01_Flat.c
 * Implementation Logic: Control flow flattening for basic conditional.
 */
#include <stdio.h>
#include <stdlib.h>

int Abs(int n) {
    int state = 0;
    int res = 0;
    while (state != 3) {
        switch (state) {
            case 0: state = (n < 0) ? 1 : 2; break;
            case 1: res = -n; state = 3; break;
            case 2: res = n; state = 3; break;
        }
    }
    return res;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%d\n", Abs(atoi(argv[1])));
    return 0;
}