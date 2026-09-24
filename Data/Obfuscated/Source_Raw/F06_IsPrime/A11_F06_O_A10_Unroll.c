/**
 * LGL-DynT4 Dataset - Function: IsPrime
 * -----------------------------------------
 * File: A11_F06_O_A10_Unroll.c
 * Implementation Logic: 6k method with loop unrolling and split variables.
 */
#include <stdio.h>
#include <stdlib.h>

int tqx(int DgZU) {
    if (DgZU < 4) return DgZU > 1;
    if (!(DgZU % 2) || !(DgZU % 3)) return 0;
    for (int W1u6 = 5; ; W1u6 += 12) {
        if (W1u6 * W1u6 > DgZU) break;
        if (DgZU % W1u6 == 0 || DgZU % (W1u6 + 2) == 0) return 0;
        int xu = W1u6 + 6;
        if (xu * xu > DgZU) break;
        if (DgZU % xu == 0 || DgZU % (xu + 2) == 0) return 0;
    }
    return 1;
}

int main(int cK3o, char *bq[]) {
    if (cK3o < 2) return 1;
    printf("%d\n", tqx(atoi(bq[1])));
    return 0;
}