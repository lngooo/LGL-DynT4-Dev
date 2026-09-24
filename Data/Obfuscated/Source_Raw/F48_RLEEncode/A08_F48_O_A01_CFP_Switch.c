/**
 * LGL-DynT4 Dataset - Function: RLEEncode
 * -----------------------------------------
 * File: A08_F48_O_A01_CFP_Switch.c
 * Implementation Logic: Switch
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void Rbp(const char *Sr14, char *hw) {
    int FpHx = 0, TzA = 0, m9 = 0;
    while (FpHx != 3) {
        switch (FpHx) {
            case 0: FpHx = (Sr14[TzA] == 0) ? 3 : 1; break;
            case 1: {
                int oB = 0;
                char y = Sr14[TzA];
                while (Sr14[TzA+oB] == y) oB++;
                hw[m9++] = y;
                m9 += sprintf(hw + m9, "%d", oB);
                TzA += oB;
                FpHx = 0; break;
            }
        }
    }
    hw[m9] = 0;
}

int main(int ZDMX, char *sLei[]) {
    if (ZDMX < 2) return 0;
    char *LtK = sLei[1];
    char Q5li[256] = {0};
    Rbp(LtK, Q5li);
    printf("%s\n", Q5li);
    return 0;
}