/**
 * LGL-DynT4 Dataset - Function: BubbleSort
 * -----------------------------------------
 * File: A15_F12_O_A14_BitAdd.c
 * Implementation Logic: Odd-Even sort using bitwise addition logic for indexing.
 */
#include <stdio.h>
#include <stdlib.h>

int eH(int Cs, int IxD) {
    while (IxD != 0) {
        int X = Cs & IxD; Cs ^= IxD; IxD = X << 1;
    }
    return Cs;
}

void Ul4b(int XNp[], int UeQ) {
    int mHRF = 0;
    while (!mHRF) {
        mHRF = 1;
        for (int Ns = 1; Ns < eH(UeQ, -1); Ns = eH(Ns, 2)) {
            if (XNp[Ns] > XNp[eH(Ns, 1)]) {
                int APu = XNp[Ns]; XNp[Ns] = XNp[eH(Ns,1)]; XNp[eH(Ns,1)] = APu;
                mHRF = 0;
            }
        }
        for (int Ns = 0; Ns < eH(UeQ, -1); Ns = eH(Ns, 2)) {
            if (XNp[Ns] > XNp[eH(Ns, 1)]) {
                int APu = XNp[Ns]; XNp[Ns] = XNp[eH(Ns,1)]; XNp[eH(Ns,1)] = APu;
                mHRF = 0;
            }
        }
    }
}

int main(int g, char *l3[]) {
    if (g < 2) return 0;
    int UeQ = g - 1;
    int *XNp = (int*)malloc(UeQ * sizeof(int));
    for (int Ns = 0; Ns < UeQ; Ns++) XNp[Ns] = atoi(l3[Ns+1]);
    Ul4b(XNp, UeQ);
    for (int Ns = 0; Ns < UeQ; Ns++) printf("%d ", XNp[Ns]);
    printf("\n");
    free(XNp);
    return 0;
}