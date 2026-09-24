/**
* LGL-DynT4 Dataset - Function: TrimSpace
* -----------------------------------------
* File: A14_F37_O_A02_StaticBuf.c
* Logic: Uses static buffer with pointer arithmetic derived from A02.
*/
#include <stdio.h>
#include <string.h>

static char BFAd[4096];
void YBq(char* a0) {
    int uB3 = 0;
    char *FWC = a0;
    while (*FWC) {
        if (*FWC != ' ' && *FWC != '\t' && *FWC != '\n') {
            *(BFAd + uB3) = *FWC;
            uB3++;
        }
        FWC++;
    }
    *(BFAd + uB3) = '\0';
    strcpy(a0, BFAd);
}

int main(int I5b, char* Y8tX[]) {
    if (I5b < 2) return 0;
    YBq(Y8tX[1]);
    printf("%s\n", Y8tX[1]);
    return 0;
}