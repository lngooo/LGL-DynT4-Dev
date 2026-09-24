/**
* LGL-DynT4 Dataset - Function: TrimSpace
* -----------------------------------------
* File: A19_F37_O_A01_LongLong.c
* Logic: Uses 64-bit long long for all index counters derived from A01.
*/
#include <stdio.h>
#include <ctype.h>

void Yq2k(char* ejUh) {
    long long dn = 0;
    long long oVW = 0;
    while (ejUh[dn] != '\0') {
        if (!isspace((unsigned char)ejUh[dn])) {
            ejUh[oVW] = ejUh[dn];
            oVW += 1LL;
        }
        dn += 1LL;
    }
    ejUh[oVW] = '\0';
}

int main(int voBw, char* WIdD[]) {
    if (voBw < 2) return 0;
    Yq2k(WIdD[1]);
    printf("%s\n", WIdD[1]);
    return 0;
}