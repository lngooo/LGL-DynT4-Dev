/**
 * LGL-DynT4 Dataset - Function: TitleCase
 * -----------------------------------------
 * File: A21_F39_O_A07_BufferShuffle.c
 * Implementation Logic: A07 with redundant memory allocation and string copying.
 * Input Format: <string>
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void Bx(char* rzy7) {
    int ZeBn = strlen(rzy7);
    char* ifl = malloc(ZeBn + 1);
    char* sxb = malloc(ZeBn + 1);
    sxb[0] = 0;
    strcpy(ifl, rzy7);
    char* K = strtok(ifl, " ");
    while(K) {
        char N68[128];
        strcpy(N68, K);
        N68[0] = toupper(N68[0]);
        for(int Gf0=1; N68[Gf0]; Gf0++) N68[Gf0] = tolower(N68[Gf0]);
        strcat(sxb, N68);
        K = strtok(NULL, " ");
        if(K) strcat(sxb, " ");
    }
    strcpy(rzy7, sxb);
    free(ifl); free(sxb);
}

int main(int lWz, char* uY[]) {
    if (lWz < 2) return 0;
    Bx(uY[1]);
    printf("%s", uY[1]);
    return 0;
}