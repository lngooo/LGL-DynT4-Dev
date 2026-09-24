/**
 * LGL-DynT4 Dataset - Function: CaesarCipher
 * -----------------------------------------
 * File: A21_F49_O_A06_UnsignedLogic.c
 * Implementation Logic: A21_F49_O_A06_UnsignedLogic
 * Input Format: <string> <shift_int>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void Ftl(char *vz, int VGSF) {

    int G = (VGSF % 26 + 26) % 26;
    for(int in=0; vz[in]; in++) {
        unsigned char HPIP = (unsigned char)vz[in];
        if(HPIP >= 97 && HPIP <= 122) vz[in] = (char)('a' + (HPIP - 97 + G) % 26);
        else if(HPIP >= 65 && HPIP <= 90) vz[in] = (char)('A' + (HPIP - 65 + G) % 26);
    }
}

int main(int dvQI, char *eyH[]) {
    if (dvQI < 3) {
        return 1;
    }
    int VGSF = atoi(eyH[2]);
    Ftl(eyH[1], VGSF);
    printf("%s\n", eyH[1]);
    return 0;
}
