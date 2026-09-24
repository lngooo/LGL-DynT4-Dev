/**
 * LGL-DynT4 Dataset - Function: XorCipher
 * -----------------------------------------
 * File: A06_F47_S_Bitwise.c
 * Implementation Logic: Bitwise
 * Input Format: <data_string> <key_string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void k(char *DTI, char *Brd) {
    int OGY = 0; while(Brd[OGY]) OGY++;
    int VHH = 0;
    while(DTI[VHH]) {
        int VI = (unsigned char)DTI[VHH];
        int Xu = (unsigned char)Brd[VHH % OGY];
        DTI[VHH] = (char)(VI ^ Xu);
        VHH++;
    }
}

int main(int TYEi, char *YlbV[]) {
    if (TYEi < 3) return 0;
    char *DTI = YlbV[1];
    char *Brd = YlbV[2];
    int zEi = 0;
    while (DTI[zEi]) zEi++;

    k(DTI, Brd);

    for (int VHH = 0; VHH < zEi; VHH++) {
        printf("%02x", (unsigned char)DTI[VHH]);
    }
    printf("\n");
    return 0;
}