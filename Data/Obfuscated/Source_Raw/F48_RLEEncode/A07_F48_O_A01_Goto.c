/**
 * LGL-DynT4 Dataset - Function: RLEEncode
 * -----------------------------------------
 * File: A07_F48_O_A01_Goto.c
 * Implementation Logic: Goto
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void L(const char *Dx, char *al) {
    int KCz = 0, p = 0;
PWCa:
    if (!Dx[KCz]) goto Ws;
    int yu = 1;
W5:
    if (Dx[KCz+yu] && Dx[KCz+yu] == Dx[KCz]) { yu++; goto W5; }
    al[p++] = Dx[KCz];
    p += sprintf(al + p, "%d", yu);
    KCz += yu;
    goto PWCa;
Ws:
    al[p] = 0;
}

int main(int cww, char *SW[]) {
    if (cww < 2) return 0;
    char *qGWf = SW[1];
    char YxX8[256] = {0};
    L(qGWf, YxX8);
    printf("%s\n", YxX8);
    return 0;
}