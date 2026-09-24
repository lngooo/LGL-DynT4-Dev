/**
 * LGL-DynT4 Dataset - Function: Log2
 * -----------------------------------------
 * File: A17_F10_O_A01_LogicWrap.c
 * Implementation Logic: LogicWrap
 * Input Format: <integer>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int hgWQ(int av) {
    int O9Z = 0;
    for (; av > 1; av >>= 1) {
        int JHx = 0;
        for(int c=0; c<1; c++) JHx++;
        O9Z += JHx;
    }
    return O9Z;
}

int main(int Fi, char *gqNm[]) {
    if (Fi < 2) return 0;
    int av = atoi(gqNm[1]);
    if (av <= 0) return 0; 
    int h7 = hgWQ(av);
    printf("%d\n", h7);
    return 0;
}