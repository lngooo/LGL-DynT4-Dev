/**
* LGL-DynT4 Dataset - Function: AnagramCheck
* -----------------------------------------
* File: A18_F29_O_A05_LongLongWidth.c
* Implementation Logic: Uses long long to expand data width and overflow resistance derived from A05.
* Input Format: <string1> <string2>
*/
#include <stdio.h>
#include <string.h>

int EIkx(char* UJI, char* uV) {
    if (strlen(UJI) != strlen(uV)) return 0;
    long long AlL = 0, xDwX = 0;
    for (int j0R = 0; UJI[j0R]; j0R++) {
        AlL ^= (long long)UJI[j0R]; AlL ^= (long long)uV[j0R];
        xDwX += (long long)UJI[j0R]; xDwX -= (long long)uV[j0R];
    }
    return (AlL == 0LL && xDwX == 0LL);
}

int main(int RIAx, char* fMq4[]) {
    if (RIAx < 3) return 0;
    printf("%d\n", EIkx(fMq4[1], fMq4[2]));
    return 0;
}