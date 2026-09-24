/**
* LGL-DynT4 Dataset - Function: TrimSpace
* -----------------------------------------
* File: A06_F37_S_LookupTable.c
* Logic: Uses a precomputed table to identify whitespace characters.
*/
#include <stdio.h>

void gyj(char* wL) {
    static int OA[256] = {0};
    OA[' '] = OA['\t'] = OA['\n'] = OA['\r'] = OA['\v'] = OA['\f'] = 1;
    int IIi = 0;
    for (int G = 0; wL[G]; G++) {
        if (!OA[(unsigned char)wL[G]]) {
            wL[IIi++] = wL[G];
        }
    }
    wL[IIi] = '\0';
}

int main(int rI, char* ISGo[]) {
    if (rI < 2) return 0;
    gyj(ISGo[1]);
    printf("%s\n", ISGo[1]);
    return 0;
}