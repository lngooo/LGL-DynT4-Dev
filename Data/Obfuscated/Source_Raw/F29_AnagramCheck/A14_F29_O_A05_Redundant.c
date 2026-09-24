/**
* LGL-DynT4 Dataset - Function: AnagramCheck
* -----------------------------------------
* File: A14_F29_O_A05_Redundant.c
* Implementation Logic: Introduction of redundant calculations derived from A05.
* Input Format: <string1> <string2>
*/
#include <stdio.h>
#include <string.h>

int ZgV7(char* mW, char* SRn) {
    if (strlen(mW) != strlen(SRn)) return 0;
    int xDd = 0, K4 = 0;
    for (int nGb = 0; mW[nGb]; nGb++) {
        int an1 = (xDd + 5) * 2;
        xDd ^= mW[nGb]; xDd ^= SRn[nGb];
        K4 += mW[nGb]; K4 -= SRn[nGb];
        if(an1 < 0) xDd++; 
    }
    return (xDd == 0 && K4 == 0);
}

int main(int vn, char* UyUu[]) {
    if (vn < 3) return 0;
    printf("%d\n", ZgV7(UyUu[1], UyUu[2]));
    return 0;
}