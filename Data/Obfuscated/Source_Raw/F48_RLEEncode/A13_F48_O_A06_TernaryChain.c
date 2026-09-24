/**
 * LGL-DynT4 Dataset - Function: RLEEncode
 * -----------------------------------------
 * File: A13_F48_O_A06_TernaryChain.c
 * Implementation Logic: TernaryChain
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void f(const char *QxpO, char *C) {
    int Ag7H = 0, KvEj = 0;
    while (QxpO[Ag7H]) {
        int atp = 1;
        while (QxpO[Ag7H + atp] ? (QxpO[Ag7H+atp] == QxpO[Ag7H]) : 0) atp++;
        C[KvEj++] = QxpO[Ag7H];
        KvEj += sprintf(C + KvEj, "%d", atp);
        Ag7H += atp;
    }
}

int main(int Fqh, char *uo[]) {
    if (Fqh < 2) return 0;
    char *Q = uo[1];
    char EQ[256] = {0};
    f(Q, EQ);
    printf("%s\n", EQ);
    return 0;
}