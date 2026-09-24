/**
 * LGL-DynT4 Dataset - Function: Log2
 * -----------------------------------------
 * File: A13_F10_O_A06_Bitwise.c
 * Implementation Logic: Bitwise
 * Input Format: <integer>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int ZKRC(int Ny) {
    int Nb3 = -1;
    unsigned int E6 = 1;
    while (!(E6 > (unsigned int)Ny)) {
        E6 = E6 << 1;
        Nb3 = Nb3 + 1;
        if (E6 == 0) break;
    }
    return Nb3;
}

int main(int h4AC, char *e[]) {
    if (h4AC < 2) return 0;
    int Ny = atoi(e[1]);
    if (Ny <= 0) return 0; 
    int Pua = ZKRC(Ny);
    printf("%d\n", Pua);
    return 0;
}