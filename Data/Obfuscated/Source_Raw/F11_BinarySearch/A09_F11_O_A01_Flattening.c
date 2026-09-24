/**
 * LGL-DynT4 Dataset - Function: BinarySearch
 * -----------------------------------------
 * File: A09_F11_O_A01_Flattening.c
 * Implementation Logic: Control flow flattening for A01.
 */
#include <stdio.h>
#include <stdlib.h>

int q(int m[], int vwiQ, int gs) {
    int FCv = 0, SLj = vwiQ - 1, Zu9, kaup = 0;
    while (kaup != -1) {
        switch (kaup) {
            case 0: kaup = (FCv <= SLj) ? 1 : 5; break;
            case 1: Zu9 = FCv + (SLj - FCv) / 2; kaup = (m[Zu9] == gs) ? 2 : 3; break;
            case 2: return Zu9;
            case 3: kaup = (m[Zu9] < gs) ? 4 : 6; break;
            case 4: FCv = Zu9 + 1; kaup = 0; break;
            case 5: return -1;
            case 6: SLj = Zu9 - 1; kaup = 0; break;
        }
    }
    return -1;
}

int main(int TV, char *r1xi[]) {
    if (TV < 3) return 1;
    int gs = atoi(r1xi[1]);
    int vwiQ = TV - 2;
    int *m = (int*)malloc(vwiQ * sizeof(int));
    for(int EDC=0; EDC<vwiQ; EDC++) m[EDC] = atoi(r1xi[EDC+2]);
    printf("%d\n", q(m, vwiQ, gs));
    free(m);
    return 0;
}