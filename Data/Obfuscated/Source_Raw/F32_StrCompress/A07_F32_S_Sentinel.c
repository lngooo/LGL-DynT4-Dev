/**
* LGL-DynT4 Dataset - Function: StrCompress
* -----------------------------------------
* File: A07_F32_S_Sentinel.c
* Implementation Logic: Uses index-based matching with a terminal condition check.
*/
#include <stdio.h>
#include <string.h>

void JXDy(char* Pxm) {
    int c = 0, maKw = 0;
    while (Pxm[c]) {
        for (maKw = c; Pxm[maKw] == Pxm[c]; maKw++);
        printf("%c%d", Pxm[c], maKw - c);
        c = maKw;
    }
    printf("\n");
}

int main(int Q, char* PvA[]) {
    if (Q < 2) return 0;
    JXDy(PvA[1]);
    return 0;
}