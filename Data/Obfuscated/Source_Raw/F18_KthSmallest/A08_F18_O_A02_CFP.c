/**
 * LGL-DynT4 Dataset - Function: KthSmallest
 * -----------------------------------------
 * File: A08_F18_O_A02_CFP.c
 * Implementation Logic: CFP
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int q9(int M[], int OSy, int vl, int QEe) {
    int bM6 = 0;
    while (bM6 != 2) {
        switch (bM6) {
            case 0: if (OSy <= vl) bM6 = 1; else bM6 = 2; break;
            case 1: {
                int yGOV = M[vl], GL = OSy;
                for (int o = OSy; o < vl; o++) if (M[o] <= yGOV) { int N=M[GL]; M[GL]=M[o]; M[o]=N; GL++; }
                int N=M[GL]; M[GL]=M[vl]; M[vl]=N;
                if (GL == QEe - 1) return M[GL];
                if (GL > QEe - 1) vl = GL - 1; else OSy = GL + 1;
                bM6 = 0; break;
            }
        }
    }
    return -1;
}

int main(int VB, char *Nf[]) {
    if (VB < 3) return 0;
    int QEe = atoi(Nf[1]);
    int Fsm = VB - 2;
    int *M = (int *)malloc(Fsm * sizeof(int));
    for (int GL = 0; GL < Fsm; GL++) M[GL] = atoi(Nf[GL + 2]);

    // 假设 K 是从 1 开始的 (1st smallest)
    int yn = q9(M, 0, Fsm - 1, QEe);

    printf("%d\n", yn);
    free(M);
    return 0;
}