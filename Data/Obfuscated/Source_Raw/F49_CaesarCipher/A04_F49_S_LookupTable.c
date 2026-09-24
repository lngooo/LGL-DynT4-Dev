/**
 * LGL-DynT4 Dataset - Function: CaesarCipher
 * -----------------------------------------
 * File: A04_F49_S_LookupTable.c
 * Implementation Logic: A04_F49_S_LookupTable
 * Input Format: <string> <shift_int>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void X8(char *WxKD, int o2h) {

    char zc[26], N[26];
    int ci39 = (o2h % 26 + 26) % 26;
    for(int w608=0; w608<26; w608++) {
        zc[w608] = 'a' + (w608 + ci39) % 26;
        N[w608] = 'A' + (w608 + ci39) % 26;
    }
    while(*WxKD) {
        if(*WxKD >= 'a' && *WxKD <= 'z') *WxKD = zc[*WxKD - 'a'];
        else if(*WxKD >= 'A' && *WxKD <= 'Z') *WxKD = N[*WxKD - 'A'];
        WxKD++;
    }
}

int main(int sQuq, char *OL8[]) {
    if (sQuq < 3) {
        return 1;
    }
    int o2h = atoi(OL8[2]);
    X8(OL8[1], o2h);
    printf("%s\n", OL8[1]);
    return 0;
}
