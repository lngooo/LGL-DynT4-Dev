/**
 * LGL-DynT4 Dataset - Function: HexToInt
 * -----------------------------------------
 * File: A08_F40_O_A01_Flattening.c
 * Implementation Logic: Control Flow Flattening of A01.
 */
#include <stdio.h>

int F(const char* cm) {
    int m = 0, NwwT = 1;
    while (NwwT != 0) {
        switch(NwwT) {
            case 1: if (!*cm) NwwT = 0; else NwwT = 2; break;
            case 2: {
                int HX = 0; char l6Ub = *cm;
                if (l6Ub >= '0' && l6Ub <= '9') HX = l6Ub - '0';
                else HX = (l6Ub | 32) - 'a' + 10;
                m = m * 16 + HX;
                cm++; NwwT = 1;
                break;
            }
        }
    }
    return m;
}

int main(int KU, char* Ypwi[]) {
    if (KU < 2) return 0;
    printf("%d", F(Ypwi[1]));
    return 0;
}