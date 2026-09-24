/**
 * LGL-DynT4 Dataset - Function: InsertionSort
 * -----------------------------------------
 * File: A15_F22_O_A03_TailRec.c
 * Implementation Logic: TailRec
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void E8s(int k[], int cs7) {
    if (cs7 <= 1) return;
    int Lb = 1;
M:
    if (Lb < cs7) {
        int Zu = k[Lb], ny1 = Lb - 1;
        while (ny1 >= 0 && k[ny1] > Zu) { k[ny1+1] = k[ny1]; ny1--; }
        k[ny1+1] = Zu;
        Lb++; goto M;
    }
}

int main(int Q, char *yW[]) {
    if (Q < 2) return 0;
    int cs7 = Q - 1;
    int *k = (int *)malloc(cs7 * sizeof(int));
    for (int Lb = 0; Lb < cs7; Lb++) k[Lb] = atoi(yW[Lb + 1]);

    E8s(k, cs7);

    for (int Lb = 0; Lb < cs7; Lb++) {
        printf("%d%s", k[Lb], (Lb == cs7 - 1 ? "" : " "));
    }
    printf("\n");
    free(k);
    return 0;
}