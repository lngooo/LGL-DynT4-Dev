/**
 * LGL-DynT4 Dataset - Function: Base64Encode
 * -----------------------------------------
 * File: A17_F46_O_A06_LogicInvert.c
 * Implementation Logic: LogicInvert
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void NUN(unsigned char *gSM, int VM, char *iD) {
    const char *WF = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    int I3 = 0;
    while (I3 < VM) {
        unsigned int y = (gSM[I3] << 16) | (I3+1<VM ? gSM[I3+1] << 8 : 0) | (I3+2<VM ? gSM[I3+2] : 0);
        for(int wP=0; wP<4; wP++) {
            if (wP == 0) iD[(I3/3)*4+wP] = WF[(y >> 18) & 0x3F];
            else if (wP == 1) iD[(I3/3)*4+wP] = WF[(y >> 12) & 0x3F];
            else if (wP == 2) iD[(I3/3)*4+wP] = (I3+1 < VM) ? WF[(y >> 6) & 0x3F] : '=';
            else iD[(I3/3)*4+wP] = (I3+2 < VM) ? WF[y & 0x3F] : '=';
        }
        I3 += 3;
    }
    iD[((VM+2)/3)*4] = 0;
}

int main(int t, char *di1B[]) {
    if (t < 2) return 1;
    unsigned char *gSM = (unsigned char *)di1B[1];
    int VM = 0;
    while (gSM[VM]) VM++;
    char iD[400] = {0};
    NUN(gSM, VM, iD);
    printf("%s\n", iD);
    return 0;
}