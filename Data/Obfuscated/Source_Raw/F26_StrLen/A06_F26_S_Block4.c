/**
 * LGL-DynT4 Dataset - Function: StrLen
 * -----------------------------------------
 * File: A06_F26_S_Block4.c
 * Implementation Logic: Manual unrolling/blocking (Seed 5).
 */
#include <stdio.h>

int V(const char *OdYm) {
    int aj = 0;
    for (;;) {
        if (OdYm[0] == 0) return aj;
        if (OdYm[1] == 0) return aj + 1;
        if (OdYm[2] == 0) return aj + 2;
        if (OdYm[3] == 0) return aj + 3;
        OdYm += 4; aj += 4;
    }
}

int main(int Y, char *kz[]) {
    if (Y < 2) return 0;
    printf("%d\n", V(kz[1]));
    return 0;
}