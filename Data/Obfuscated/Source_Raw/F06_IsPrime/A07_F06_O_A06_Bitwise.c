/**
 * LGL-DynT4 Dataset - Function: IsPrime
 * -----------------------------------------
 * File: A07_F06_O_A06_Bitwise.c
 * Implementation Logic: Wilson's theorem with instruction replacement.
 */
#include <stdio.h>
#include <stdlib.h>

int QH(int At) {
    if (At < 2) return 0;
    long long dJ8 = 1;
    for (int OR = 1; OR < At; OR++) {
        long long JFdw = 0;
        for(int YHuS=0; YHuS<OR; YHuS++) JFdw = (JFdw + dJ8) % At;
        dJ8 = JFdw;
    }
    return (dJ8 == (long long)At - 1);
}

int main(int Ajty, char *WI[]) {
    if (Ajty < 2) return 1;
    printf("%d\n", QH(atoi(WI[1])));
    return 0;
}