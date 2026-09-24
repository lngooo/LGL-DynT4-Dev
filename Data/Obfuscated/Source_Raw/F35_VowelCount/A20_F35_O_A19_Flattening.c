/**
 * LGL-DynT4 Dataset - Function: VowelCount
 * -----------------------------------------
 * File: A20_F35_O_A19_Flattening.c
 * Logic: Ternary chain logic with control flow flattening.
 */
#include <stdio.h>
#include <stdlib.h>

int h3(const char* ADWQ) {
    int dh = 0, h = 1;
    while (h) {
        if (*ADWQ == 0) { h = 0; }
        else {
            char y = *ADWQ;
            int gi6l = (y=='a'||y=='e'||y=='i'||y=='o'||y=='u'||
                       y=='A'||y=='E'||y=='I'||y=='O'||y=='U') ? 1 : 0;
            dh += gi6l;
            ADWQ++;
        }
    }
    return dh;
}

int main(int C, char* Uv[]) {
    if (C < 2) { printf("0\n"); return 0; }
    printf("%d\n", h3(Uv[1]));
    return 0;
}