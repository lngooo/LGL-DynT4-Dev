/**
 * LGL-DynT4 Dataset - Function: ArrayRotate
 * -----------------------------------------
 * File: A13_F17_O_A06_VarSplit.c
 * Logic: Full copy with loop indices split into base and offset.
 */
#include <stdio.h>
#include <stdlib.h>

void p(int kv[], int eOO, int BZbL) {
    if (eOO == 0) return;
    BZbL %= eOO;
    int *qpg = malloc(eOO * sizeof(int));
    int p9v1 = 0, v = 0;
    while(p9v1 + v < eOO) {
        qpg[p9v1+v] = kv[(p9v1 + v + BZbL) % eOO];
        v++; if(v >= 5) { p9v1 += v; v = 0; }
    }
    for(int eX=0; eX<eOO; eX++) kv[eX] = qpg[eX];
    free(qpg);
}

int main(int WgOC, char *f[]) {
    if (WgOC < 3) return 0;
    int BZbL = atoi(f[1]);
    int eOO = WgOC - 2;
    int *kv = (int*)malloc(eOO * sizeof(int));
    for(int eX=0; eX<eOO; eX++) kv[eX] = atoi(f[eX+2]);
    p(kv, eOO, BZbL);
    for(int eX=0; eX<eOO; eX++) printf("%d ", kv[eX]);
    printf("\n");
    free(kv);
    return 0;
}