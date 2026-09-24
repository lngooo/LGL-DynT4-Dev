/**
* LGL-DynT4 Dataset - Function: TrimSpace
* -----------------------------------------
* File: A04_F37_S_MemmoveLogic.c
* Logic: Uses memmove to shift the remaining string whenever a space is found.
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void JPpl(char* sR5Z) {
    int vU = 0;
    int wgX7 = strlen(sR5Z);
    while (sR5Z[vU]) {
        if (isspace((unsigned char)sR5Z[vU])) {
            memmove(&sR5Z[vU], &sR5Z[vU+1], wgX7 - vU);
            wgX7--;
        } else {
            vU++;
        }
    }
}

int main(int LZ2Z, char* lsOc[]) {
    if (LZ2Z < 2) return 0;
    JPpl(lsOc[1]);
    printf("%s\n", lsOc[1]);
    return 0;
}