/**
 * LGL-DynT4 Dataset - Function: SelectionSort
 * -----------------------------------------
 * File: A16_F20_O_A01_Opaque.c
 * Implementation Logic: Opaque
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void a8xY(int Gs[], int Qqt) {
    for (int Rpa5 = 0; Rpa5 < Qqt; Rpa5++) {
        if ((Rpa5 * Rpa5 + 1) > 0) {
            int cabj = Rpa5;
            for (int H0V = Rpa5 + 1; H0V < Qqt; H0V++) if (Gs[H0V] < Gs[cabj]) cabj = H0V;
            int vk9 = Gs[Rpa5]; Gs[Rpa5] = Gs[cabj]; Gs[cabj] = vk9;
        }
    }
}

int main(int pJzm, char *dZ7K[]) {
    if (pJzm < 2) return 0;
    int Qqt = pJzm - 1;
    int *Gs = (int *)malloc(Qqt * sizeof(int));
    for (int Rpa5 = 0; Rpa5 < Qqt; Rpa5++) Gs[Rpa5] = atoi(dZ7K[Rpa5 + 1]);

    a8xY(Gs, Qqt);

    for (int Rpa5 = 0; Rpa5 < Qqt; Rpa5++) {
        printf("%d%s", Gs[Rpa5], (Rpa5 == Qqt - 1 ? "" : " "));
    }
    printf("\n");
    free(Gs);
    return 0;
}