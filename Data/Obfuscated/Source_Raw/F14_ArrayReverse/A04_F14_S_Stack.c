/**
 * LGL-DynT4 Dataset - Function: ArrayReverse
 * -----------------------------------------
 * File: A04_F14_S_Stack.c
 * Implementation Logic: Using an auxiliary stack to reverse values.
 */
#include <stdio.h>
#include <stdlib.h>

void Aw9(int skc[], int UYK) {
    if (UYK <= 1) return;
    int *dOE = (int*)malloc(UYK * sizeof(int));
    for(int Kd=0; Kd<UYK; Kd++) dOE[Kd] = skc[Kd];
    for(int Kd=0; Kd<UYK; Kd++) skc[Kd] = dOE[UYK - 1 - Kd];
    free(dOE);
}

int main(int ZVN, char *s[]) {
    if (ZVN < 2) return 0;
    int UYK = ZVN - 1;
    int *skc = (int*)malloc(UYK * sizeof(int));
    for(int Kd=0; Kd<UYK; Kd++) skc[Kd] = atoi(s[Kd+1]);
    Aw9(skc, UYK);
    for(int Kd=0; Kd<UYK; Kd++) printf("%d ", skc[Kd]);
    printf("\n");
    free(skc);
    return 0;
}