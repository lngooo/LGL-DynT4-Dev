/**
* LGL-DynT4 Dataset - Function: CharFrequency
* -----------------------------------------
* File: A19_F34_O_A01_LongLong.c
* Logic: Uses 64-bit types for counters and indexing derived from A01.
*/
#include <stdio.h>
#include <string.h>

int PlRO(char* xd, char bQ5) {
    long long Wyy = 0;
    long long RDK = (long long)strlen(xd);
    for (long long b = 0LL; b < RDK; b++) {
        if (xd[b] == bQ5) Wyy += 1LL;
    }
    return (int)Wyy;
}

int main(int IlX, char* xrq[]) {
    if (IlX < 3) return 0;
    printf("%d\n", PlRO(xrq[1], xrq[2][0]));
    return 0;
}