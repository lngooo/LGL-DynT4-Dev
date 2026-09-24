/**
* LGL-DynT4 Dataset - Function: AnagramCheck
* -----------------------------------------
* File: A19_F29_O_A01_DoubleArray.c
* Implementation Logic: Splits one frequency array into two separate arrays for comparison derived from A01.
* Input Format: <string1> <string2>
*/
#include <stdio.h>
#include <string.h>

int v7(char* PDC, char* cv) {
    if (strlen(PDC) != strlen(cv)) return 0;
    int Mv[256] = {0}, ZK[256] = {0};
    for (int Yn = 0; PDC[Yn]; Yn++) { Mv[(unsigned char)PDC[Yn]]++; ZK[(unsigned char)cv[Yn]]++; }
    for (int Yn = 0; Yn < 256; Yn++) if (Mv[Yn] != ZK[Yn]) return 0;
    return 1;
}

int main(int f0A4, char* G[]) {
    if (f0A4 < 3) return 0;
    printf("%d\n", v7(G[1], G[2]));
    return 0;
}