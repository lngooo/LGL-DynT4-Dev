/**
 * LGL-DynT4 Dataset - Function: RLEEncode
 * -----------------------------------------
 * File: A06_F48_S_MemmoveStyle.c
 * Implementation Logic: MemmoveStyle
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void bp(const char *D, char *O) {
    char Am[256]; strcpy(Am, D);
    int rrn = 0, ZMy = 0;
    while (Am[rrn]) {
        int Pq = 1;
        char HR0 = Am[rrn];
        while (Am[rrn + Pq] == HR0) Pq++;
        O[ZMy++] = HR0;
        ZMy += sprintf(O + ZMy, "%d", Pq);
        rrn += Pq;
    }
    O[ZMy] = '\0';
}

int main(int afla, char *ZQ7[]) {
    if (afla < 2) return 0;
    char *tk = ZQ7[1];
    char nAM[256] = {0};
    bp(tk, nAM);
    printf("%s\n", nAM);
    return 0;
}