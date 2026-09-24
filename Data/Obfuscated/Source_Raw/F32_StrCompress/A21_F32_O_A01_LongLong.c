/**
* LGL-DynT4 Dataset - Function: StrCompress
* -----------------------------------------
* File: A21_F32_O_A01_LongLong.c
* Implementation Logic: Uses long long for all counters derived from A01.
*/
#include <stdio.h>
#include <string.h>

void SZr(char* Oz) {
    long long gyE = (long long)strlen(Oz);
    for (long long pu = 0; pu < gyE; pu++) {
        long long v = 1;
        while (pu + 1 < gyE && Oz[pu] == Oz[pu + 1]) {
            v++;
            pu++;
        }
        printf("%c%lld", Oz[pu], v);
    }
    printf("\n");
}

int main(int EWp, char* FoB[]) {
    if (EWp < 2) return 0;
    SZr(FoB[1]);
    return 0;
}