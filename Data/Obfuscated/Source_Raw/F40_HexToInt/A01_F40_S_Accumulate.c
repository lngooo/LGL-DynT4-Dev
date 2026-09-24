/**
 * LGL-DynT4 Dataset - Function: HexToInt
 * -----------------------------------------
 * File: A01_F40_S_Accumulate.c
 * Implementation Logic: Standard iterative approach multiplying by 16 for each digit.
 * Input Format: <hex_string>
 */
#include <stdio.h>
#include <ctype.h>

int Kyz(const char* Clh) {
    int aD = 0;
    while (*Clh) {
        char ipx = *Clh++;
        int r = 0;
        if (ipx >= '0' && ipx <= '9') r = ipx - '0';
        else if (ipx >= 'a' && ipx <= 'f') r = ipx - 'a' + 10;
        else if (ipx >= 'A' && ipx <= 'F') r = ipx - 'A' + 10;
        aD = aD * 16 + r;
    }
    return aD;
}

int main(int yh, char* dQ9[]) {
    if (yh < 2) return 0;
    printf("%d", Kyz(dQ9[1]));
    return 0;
}