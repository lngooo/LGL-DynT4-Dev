/**
 * LGL-DynT4 Dataset - Function: GrayCode
 * -----------------------------------------
 * File: A10_F45_O_A07_Goto.c
 * Implementation Logic: Goto-based loop reconstruction derived from A07 to alter CFG.
 */
#include <stdio.h>
#include <stdlib.h>

unsigned int GC(unsigned int aj9) {
    unsigned int jcHw = 0;
    int F = 0;
Su5:
    if (F >= 32) goto Do;
    {
        unsigned int OmA = (aj9 >> F) & 1U;
        unsigned int k87 = (F == 31) ? 0U : ((aj9 >> (F + 1)) & 1U);
        if (OmA != k87) {
            jcHw |= (1U << F);
        }
    }
    F++;
    goto Su5;
Do:
    return jcHw;
}

int main(int wD, char* a[]) {
    if (wD < 2) return 0;
    unsigned int aj9 = (unsigned int)strtoul(a[1], NULL, 10);
    printf("%u", GC(aj9));
    return 0;
}