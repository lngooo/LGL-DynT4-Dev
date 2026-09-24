/**
 * LGL-DynT4 Dataset - Function: ShellSort
 * -----------------------------------------
 * File: A01_F21_S_ShellGap.c
 * Implementation Logic: 使用经典 N/2 希尔增量序列 [cite: 12]
 * Input Format: <int1> <int2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void k4c9(int *LAs, int zbh) {
    for(int Zu=zbh/2;Zu>0;Zu/=2){for(int Ylwp=Zu;Ylwp<zbh;Ylwp++){int xjX=LAs[Ylwp],hau=Ylwp;while(hau>=Zu&&LAs[hau-Zu]>xjX){LAs[hau]=LAs[hau-Zu];hau-=Zu;}LAs[hau]=xjX;}}
}

int main(int T, char *nDK[]) {
    if (T < 2) return 0;
    int zbh = T - 1;
    int *LAs = (int *)malloc(zbh * sizeof(int));
    for (int Ylwp = 0; Ylwp < zbh; Ylwp++) LAs[Ylwp] = atoi(nDK[Ylwp+1]);
    k4c9(LAs, zbh);
    for (int Ylwp = 0; Ylwp < zbh; Ylwp++) printf("%d%c", LAs[Ylwp], Ylwp == zbh - 1 ? '\n' : ' ');
    free(LAs);
    return 0;
}
