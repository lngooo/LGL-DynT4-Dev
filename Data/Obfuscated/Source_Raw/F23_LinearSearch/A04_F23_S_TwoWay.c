/**
 * LGL-DynT4 Dataset - Function: LinearSearch
 * -----------------------------------------
 * File: A04_F23_S_TwoWay.c
 * Implementation Logic: TwoWay
 * Input Format: <target> <val1> <val2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int NyO(int Ow[], int HQ9l, int o4s) {
    int FYOz = 0, IEs = HQ9l - 1;
    while (FYOz <= IEs) {
        if (Ow[FYOz] == o4s) return FYOz;
        if (Ow[IEs] == o4s) return IEs;
        FYOz++; IEs--;
    }
    return -1;
}

int main(int o, char *W[]) {
    if (o < 3) return 1;
    int o4s = atoi(W[1]);
    int ACu = o - 2;
    int Ow[100];
    for (int QB = 0; QB < ACu; QB++) {
        Ow[QB] = atoi(W[QB + 2]);
    }
    int uQhw = NyO(Ow, ACu, o4s);
    printf("%d\n", uQhw);
    return 0;
}