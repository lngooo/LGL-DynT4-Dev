/**
 * LGL-DynT4 Dataset - Function: StrLen
 * -----------------------------------------
 * File: A11_F26_S_SentinelLogic.c
 * Implementation Logic: For-loop based variant (Seed 8).
 */
#include <stdio.h>

int K3(const char *Z) {
    int IoS;
    for (IoS = 0; Z[IoS]; ++IoS);
    return IoS;
}

int main(int xk, char *R[]) {
    if (xk < 2) return 0;
    printf("%d\n", K3(R[1]));
    return 0;
}