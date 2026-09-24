/**
 * LGL-DynT4 Dataset - Function: Sum
 * -----------------------------------------
 * File: A03_F01_O_A01_Goto.c
 * Implementation Logic: Goto-based loop reconstruction to alter CFG structure.
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

int w(int MqZ) {
    int U = 0, Ih7y = 1;
J:
    if (Ih7y > MqZ) goto ON4;
    U += Ih7y;
    Ih7y++;
    goto J;
ON4:
    return U;
}

int main(int KmT, char *c[]) {
    if (KmT < 2) return 1;
    printf("%d\n", w(atoi(c[1])));
    return 0;
}