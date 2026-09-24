/**
* LGL-DynT4 Dataset - Function: StrCompress
* -----------------------------------------
* File: A06_F32_S_MemchrLogic.c
* Implementation Logic: Uses a while loop to jump to the next different character.
*/
#include <stdio.h>
#include <string.h>

void E7(char* bv2) {
    while (*bv2) {
        char YWBg = *bv2;
        int nkmN = 0;
        char *XLVS = bv2;
        while (*XLVS && *XLVS == YWBg) {
            nkmN++;
            XLVS++;
        }
        printf("%c%d", YWBg, nkmN);
        bv2 = XLVS;
    }
    printf("\n");
}

int main(int V, char* Q7[]) {
    if (V < 2) return 0;
    E7(Q7[1]);
    return 0;
}