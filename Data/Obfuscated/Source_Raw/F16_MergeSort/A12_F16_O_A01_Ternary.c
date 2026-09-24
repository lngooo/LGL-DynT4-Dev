/**
 * LGL-DynT4 Dataset - Function: MergeSort
 * -----------------------------------------
 * File: A12_F16_O_A01_Ternary.c
 * Implementation Logic: Ternary
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void s(int z[], int L78, int u) {
    if (L78 >= u) return;
    int bf = L78 + (u - L78) / 2;
    s(z, L78, bf);
    s(z, bf + 1, u);
    int *TQED = (int*)malloc((u-L78+1)*4), MQa = L78, cPN = bf + 1, u8UU = 0;
    while (MQa <= bf || cPN <= u) 
        TQED[u8UU++] = (MQa <= bf && (cPN > u || z[MQa] <= z[cPN])) ? z[MQa++] : z[cPN++];
    for (int n3 = 0; n3 < u8UU; n3++) z[L78 + n3] = TQED[n3];
    free(TQED);
}

int main(int Z, char *uZd[]) {
    if (Z < 2) return 0;
    int J = Z - 1;
    int *z = (int *)malloc(J * sizeof(int));
    for (int MQa = 0; MQa < J; MQa++) z[MQa] = atoi(uZd[MQa + 1]);

    s(z, 0, J - 1);

    for (int MQa = 0; MQa < J; MQa++) {
        printf("%d%s", z[MQa], (MQa == J - 1 ? "" : " "));
    }
    printf("\n");
    free(z);
    return 0;
}