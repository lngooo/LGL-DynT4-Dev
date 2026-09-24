/**
 * LGL-DynT4 Dataset - Function: IsPalindrome
 * -----------------------------------------
 * File: A09_F28_O_A02_FakeControl.c
 * Implementation Logic: FakeControl derived from seed.
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int jcD(char *T4I2) {
    int zi = 0; while (T4I2[zi]) zi++;
    if (zi <= 1) return 1;
    if (1) {
        if (T4I2[0] != T4I2[zi-1]) return 0;
    } else {
        int n8z = 100;
    }
    char ADUC[100];
    int yDxv = 1;
    while(yDxv < zi - 1) { ADUC[yDxv-1] = T4I2[yDxv]; yDxv++; }
    ADUC[yDxv-1] = '\0';
    return jcD(ADUC);
}

int main(int Qzi, char *pn[]) {
    if (Qzi < 2) return 1;
    char *T4I2 = pn[1];
    int Km = jcD(T4I2);
    printf("%d\n", Km);
    return 0;
}