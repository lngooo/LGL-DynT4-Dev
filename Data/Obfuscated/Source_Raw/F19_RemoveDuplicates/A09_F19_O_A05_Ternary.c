/**
 * LGL-DynT4 Dataset - Function: RemoveDuplicates
 * -----------------------------------------
 * File: A09_F19_O_A05_Ternary.c
 * Implementation Logic: Ternary
 * Input Format: <val1> <val2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int gCQ(int kiwV[], int aw43) {
    int hm = aw43;
    for (int ciz = 0; ciz < hm; ciz++) {
        for (int Vv5c = ciz + 1; Vv5c < hm; Vv5c++) {
            int Qm = (kiwV[ciz] == kiwV[Vv5c]);
            if (Qm) {
                for (int QrhA = Vv5c; QrhA < hm - 1; QrhA++) kiwV[QrhA] = kiwV[QrhA + 1];
                hm--; Vv5c--;
            }
        }
    }
    return hm;
}

int main(int JFZR, char *uW[]) {
    if (JFZR < 2) return 0;
    int GU7V = JFZR - 1;
    int kiwV[128];
    for (int ciz = 0; ciz < GU7V; ciz++) {
        kiwV[ciz] = atoi(uW[ciz + 1]);
    }
    int ih9g = gCQ(kiwV, GU7V);
    for (int ciz = 0; ciz < ih9g; ciz++) {
        printf("%d%s", kiwV[ciz], (ciz == ih9g - 1 ? "" : " "));
    }
    printf("\n");
    return 0;
}