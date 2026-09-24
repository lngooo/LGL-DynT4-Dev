/**
 * LGL-DynT4 Dataset - Function: GCD
 * -----------------------------------------
 * File: A11_F02_O_A10_Redundant.c
 * Implementation Logic: Brute force with redundant arithmetic and split variables.
 * Input Format: <a> <b>
 */
#include <stdio.h>
#include <stdlib.h>

int Ifi(int oy, int Tn) {
    int A = abs(oy), vIDA = abs(Tn);
    if (A * vIDA == 0) return A + vIDA;
    int n = 1;
    int y5XL = (A < vIDA) ? A : vIDA;
    for (int W = 1; W <= y5XL; W++) {
        int Ea8w = A % W;
        int Wy2 = vIDA % W;
        if (Ea8w == 0 && Wy2 == 0) n = W;
    }
    return n;
}

int main(int IVVI, char *Fo[]) {
    if (IVVI < 3) return 1;
    printf("%d\n", Ifi(atoi(Fo[1]), atoi(Fo[2])));
    return 0;
}