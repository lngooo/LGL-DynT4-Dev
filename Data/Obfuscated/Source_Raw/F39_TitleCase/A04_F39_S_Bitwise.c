/**
 * LGL-DynT4 Dataset - Function: TitleCase
 * -----------------------------------------
 * File: A04_F39_S_Bitwise.c
 * Implementation Logic: Uses bitwise AND/OR to flip ASCII casing without standard lib.
 * Input Format: <string>
 */
#include <stdio.h>

void fk(char* tkzc) {
    int pA = 1;
    for (int Za = 0; tkzc[Za]; Za++) {
        if (tkzc[Za] == 32) {
            pA = 1;
            continue;
        }
        if (pA) {
            if (tkzc[Za] >= 97) tkzc[Za] &= ~(1 << 5);
            pA = 0;
        } else {
            if (tkzc[Za] <= 90 && tkzc[Za] >= 65) tkzc[Za] |= (1 << 5);
        }
    }
}

int main(int Dx, char* Hle[]) {
    if (Dx < 2) return 0;
    fk(Hle[1]);
    printf("%s", Hle[1]);
    return 0;
}