/**
 * LGL-DynT4 Dataset - Function: QuickSort
 * -----------------------------------------
 * File: A04_F13_S_TailRecursive.c
 * Implementation Logic: TailRecursive
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void G9(int J7Tb[], int vFz, int bw) {
    while (vFz < bw) {
        int wOt = J7Tb[bw], Gr = vFz;
        for (int O = vFz; O < bw; O++) {
            if (J7Tb[O] < wOt) {
                int y40 = J7Tb[Gr]; J7Tb[Gr] = J7Tb[O]; J7Tb[O] = y40;
                Gr++;
            }
        }
        int y40 = J7Tb[Gr]; J7Tb[Gr] = J7Tb[bw]; J7Tb[bw] = y40;
        if (Gr - vFz < bw - Gr) {
            G9(J7Tb, vFz, Gr - 1);
            vFz = Gr + 1;
        } else {
            G9(J7Tb, Gr + 1, bw);
            bw = Gr - 1;
        }
    }
}

int main(int J, char *ojv[]) {
    if (J < 2) return 0;
    int QifU = J - 1;
    int *J7Tb = (int *)malloc(QifU * sizeof(int));
    for (int Gr = 0; Gr < QifU; Gr++) J7Tb[Gr] = atoi(ojv[Gr + 1]);

    G9(J7Tb, 0, QifU - 1);

    for (int Gr = 0; Gr < QifU; Gr++) {
        printf("%d%s", J7Tb[Gr], (Gr == QifU - 1 ? "" : " "));
    }
    printf("\n");
    free(J7Tb);
    return 0;
}