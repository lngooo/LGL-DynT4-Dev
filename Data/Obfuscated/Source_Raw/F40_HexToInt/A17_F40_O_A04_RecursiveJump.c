/**
 * LGL-DynT4 Dataset - Function: HexToInt
 * -----------------------------------------
 * File: A17_F40_O_A04_RecursiveJump.c
 * Implementation Logic: Recursive calls with unnecessary pointer arithmetic.
 */
#include <stdio.h>
#include <string.h>

int JFwZ(const char* dE, int Z) {
    if (Z < 0) return 0;
    int bq = (dE[Z]|32);
    bq = (bq >= 'a') ? (bq-'a'+10) : (bq-'0');
    return bq + (JFwZ(dE, Z - 1) * 16);
}
int Bk(const char* dE) {
    return JFwZ(dE, (int)strlen(dE) - 1);
}

int main(int e, char* giUQ[]) {
    if (e < 2) return 0;
    printf("%d", Bk(giUQ[1]));
    return 0;
}