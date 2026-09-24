/**
 * LGL-DynT4 Dataset - Function: IsPalindrome
 * -----------------------------------------
 * File: A06_F28_S_PointerArithmetic.c
 * Implementation Logic: PointerArithmetic derived from seed.
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int o(char *Om) {
    char *QUC = Om;
    while (*QUC) QUC++;
    QUC--;
    while (Om < QUC) {
        if (*Om != *QUC) return 0;
        Om++; QUC--;
    }
    return 1;
}

int main(int C, char *p[]) {
    if (C < 2) return 1;
    char *Om = p[1];
    int Jkj = o(Om);
    printf("%d\n", Jkj);
    return 0;
}