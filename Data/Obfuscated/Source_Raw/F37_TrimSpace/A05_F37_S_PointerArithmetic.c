/**
* LGL-DynT4 Dataset - Function: TrimSpace
* -----------------------------------------
* File: A05_F37_S_PointerArithmetic.c
* Logic: Direct pointer manipulation and dereferencing.
*/
#include <stdio.h>

void SOs1(char* yIpU) {
    char *NBb = yIpU, *CGt = yIpU;
    while (*NBb) {
        if (*NBb != 32 && *NBb != 9 && *NBb != 10 && *NBb != 13) {
            *CGt = *NBb;
            CGt++;
        }
        NBb++;
    }
    *CGt = '\0';
}

int main(int eC, char* j[]) {
    if (eC < 2) return 0;
    SOs1(j[1]);
    printf("%s\n", j[1]);
    return 0;
}