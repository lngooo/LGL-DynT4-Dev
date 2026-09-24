/**
* LGL-DynT4 Dataset - Function: StrCompress
* -----------------------------------------
* File: A20_F32_O_A06_PtrCopy.c
* Implementation Logic: Copies pointer into local stack variable derived from A06.
*/
#include <stdio.h>
#include <string.h>

void p(char* qZp) {
    char *OF = qZp;
    while (*OF) {
        int j = 0;
        char u = *OF;
        char *KvaE = OF;
        while (*KvaE == u) { j++; KvaE++; }
        printf("%c%d", u, j);
        OF = KvaE;
    }
    printf("\n");
}

int main(int lg, char* UWB[]) {
    if (lg < 2) return 0;
    p(UWB[1]);
    return 0;
}