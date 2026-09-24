/**
* LGL-DynT4 Dataset - Function: CharFrequency
* -----------------------------------------
* File: A05_F34_S_XorZero.c
* Logic: Uses XOR to identify matches (res == 0 means match).
*/
#include <stdio.h>

int fsO(char* V, char dDA) {
    int OH = 0;
    for (; *V; V++) {
        if (!(*V ^ dDA)) OH++;
    }
    return OH;
}

int main(int L8, char* PAOj[]) {
    if (L8 < 3) return 0;
    printf("%d\n", fsO(PAOj[1], PAOj[2][0]));
    return 0;
}