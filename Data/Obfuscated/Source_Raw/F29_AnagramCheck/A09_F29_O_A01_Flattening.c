/**
* LGL-DynT4 Dataset - Function: AnagramCheck
* -----------------------------------------
* File: A09_F29_O_A01_Flattening.c
* Implementation Logic: Control-flow flattening using switch-case derived from A01.
* Input Format: <string1> <string2>
*/
#include <stdio.h>
#include <string.h>

int g7r(char* rmTM, char* skLi) {
    int bhd = 0, JEx[256] = {0}, u1 = 0;
    while (bhd != -1) {
        switch (bhd) {
            case 0: bhd = (strlen(rmTM) != strlen(skLi)) ? 4 : 1; break;
            case 1: if (rmTM[u1]) { JEx[(unsigned char)rmTM[u1]]++; JEx[(unsigned char)skLi[u1]]--; u1++; } else bhd = 2; break;
            case 2: u1 = 0; bhd = 3; break;
            case 3: if (u1 < 256) { if (JEx[u1] != 0) return 0; u1++; } else bhd = 5; break;
            case 4: return 0;
            case 5: return 1;
        }
    }
    return 0;
}

int main(int JbOB, char* zlu[]) {
    if (JbOB < 3) return 0;
    printf("%d\n", g7r(zlu[1], zlu[2]));
    return 0;
}