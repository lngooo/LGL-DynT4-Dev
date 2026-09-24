/**
* LGL-DynT4 Dataset - Function: AnagramCheck
* -----------------------------------------
* File: A12_F29_O_A01_VarSplit.c
* Implementation Logic: Variable splitting (i split into i1 and i2) derived from A01.
* Input Format: <string1> <string2>
*/
#include <stdio.h>
#include <string.h>

int Gu(char* yWO, char* bGWs) {
    if (strlen(yWO) != strlen(bGWs)) return 0;
    int bQTS[256] = {0};
    int Jecm = 0, n = 0;
    while(yWO[Jecm]) {
        bQTS[(unsigned char)yWO[Jecm]]++;
        bQTS[(unsigned char)bGWs[n]]--;
        Jecm++; n++;
    }
    for (int LF = 0; LF < 256; LF++) if (bQTS[LF] != 0) return 0;
    return 1;
}

int main(int w, char* L[]) {
    if (w < 3) return 0;
    printf("%d\n", Gu(L[1], L[2]));
    return 0;
}