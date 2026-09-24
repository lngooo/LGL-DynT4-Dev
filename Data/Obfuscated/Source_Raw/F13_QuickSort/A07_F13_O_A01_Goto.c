/**
 * LGL-DynT4 Dataset - Function: QuickSort
 * -----------------------------------------
 * File: A07_F13_O_A01_Goto.c
 * Implementation Logic: Goto
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void oVQm(int el[], int NFSu, int pBzX) {
    if (NFSu >= pBzX) goto M;
    int UuzN = el[pBzX], H = NFSu - 1, C = NFSu;
c4pH:
    if (C >= pBzX) goto VcJy;
    if (el[C] >= UuzN) goto m;
    H++;
    { int Cz4 = el[H]; el[H] = el[C]; el[C] = Cz4; }
m:
    C++; goto c4pH;
VcJy:
    { int Cz4 = el[H+1]; el[H+1] = el[pBzX]; el[pBzX] = Cz4; }
    oVQm(el, NFSu, H);
    oVQm(el, H + 2, pBzX);
M:;
}

int main(int X0s, char *kBsN[]) {
    if (X0s < 2) return 0;
    int S = X0s - 1;
    int *el = (int *)malloc(S * sizeof(int));
    for (int H = 0; H < S; H++) el[H] = atoi(kBsN[H + 1]);

    oVQm(el, 0, S - 1);

    for (int H = 0; H < S; H++) {
        printf("%d%s", el[H], (H == S - 1 ? "" : " "));
    }
    printf("\n");
    free(el);
    return 0;
}