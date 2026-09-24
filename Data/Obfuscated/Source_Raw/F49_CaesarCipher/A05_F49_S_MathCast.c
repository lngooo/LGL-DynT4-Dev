/**
 * LGL-DynT4 Dataset - Function: CaesarCipher
 * -----------------------------------------
 * File: A05_F49_S_MathCast.c
 * Implementation Logic: A05_F49_S_MathCast
 * Input Format: <string> <shift_int>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void cu(char *VJ9, int Ss7) {

    int oGf = (int)((Ss7 % 26 + 26) % 26);
    for(int J=0; VJ9[J] != 0; J++) {
        int O = (int)VJ9[J];
        if(O >= 97 && O <= 122) VJ9[J] = (char)(97 + (O - 97 + oGf) % 26);
        if(O >= 65 && O <= 90) VJ9[J] = (char)(65 + (O - 65 + oGf) % 26);
    }
}

int main(int T, char *wOwH[]) {
    if (T < 3) {
        return 1;
    }
    int Ss7 = atoi(wOwH[2]);
    cu(wOwH[1], Ss7);
    printf("%s\n", wOwH[1]);
    return 0;
}
