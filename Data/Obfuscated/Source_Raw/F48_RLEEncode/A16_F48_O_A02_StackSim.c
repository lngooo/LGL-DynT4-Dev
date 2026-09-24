/**
 * LGL-DynT4 Dataset - Function: RLEEncode
 * -----------------------------------------
 * File: A16_F48_O_A02_StackSim.c
 * Implementation Logic: StackSim
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void fES(const char *Qk, char *frw) {
    if (!*Qk) return;
    int mqcM = 0;
    while (Qk[mqcM] == Qk[0]) mqcM++;
    int J = strlen(frw);
    frw[J] = Qk[0];
    sprintf(frw + J + 1, "%d", mqcM);
    fES(Qk + mqcM, frw);
}

int main(int Gaw, char *IVf[]) {
    if (Gaw < 2) return 0;
    char *u = IVf[1];
    char qrTZ[256] = {0};
    fES(u, qrTZ);
    printf("%s\n", qrTZ);
    return 0;
}