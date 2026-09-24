/**
* LGL-DynT4 Dataset - Function: AnagramCheck
* -----------------------------------------
* File: A01_F29_S_FreqArray.c
* Implementation Logic: Uses a fixed-size frequency array (256 ASCII) to count characters.
* Input Format: <string1> <string2>
*/
#include <stdio.h>
#include <string.h>

int UdN(char* fRW5, char* aVRf) {
    if (strlen(fRW5) != strlen(aVRf)) return 0;
    int LX6[256] = {0};
    for (int SRM = 0; fRW5[SRM] != '\0'; SRM++) {
        LX6[(unsigned char)fRW5[SRM]]++;
        LX6[(unsigned char)aVRf[SRM]]--;
    }
    for (int SRM = 0; SRM < 256; SRM++) {
        if (LX6[SRM] != 0) return 0;
    }
    return 1;
}

int main(int K, char* U1u[]) {
    if (K < 3) return 0;
    printf("%d\n", UdN(U1u[1], U1u[2]));
    return 0;
}