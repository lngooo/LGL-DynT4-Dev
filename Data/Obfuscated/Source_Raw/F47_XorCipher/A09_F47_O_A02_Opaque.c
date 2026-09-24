/**
 * LGL-DynT4 Dataset - Function: XorCipher
 * -----------------------------------------
 * File: A09_F47_O_A02_Opaque.c
 * Implementation Logic: Opaque
 * Input Format: <data_string> <key_string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void Bml(char *E, char *Pcb) {
    int Ne = 0; while(Pcb[Ne]) Ne++;
    if (*E != '\0') {
        if ((Ne * Ne + 7) > 0) {
            static int V = 0;
            *E ^= Pcb[V % Ne];
            V++;
            Bml(E + 1, Pcb);
            if (*(E-1) == 0) V = 0; 
        }
    }
}

int main(int K, char *px[]) {
    if (K < 3) return 0;
    char *E = px[1];
    char *Pcb = px[2];
    int IN = 0;
    while (E[IN]) IN++;

    Bml(E, Pcb);

    for (int ik = 0; ik < IN; ik++) {
        printf("%02x", (unsigned char)E[ik]);
    }
    printf("\n");
    return 0;
}