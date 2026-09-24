/**
 * LGL-DynT4 Dataset - Function: BubbleSort
 * -----------------------------------------
 * File: A07_F12_O_A06_Opaque.c
 * Implementation Logic: Optimized BS with opaque predicates.
 */
#include <stdio.h>
#include <stdlib.h>

void Akl2(int Qq[], int zg) {
    int e;
    for (int JdbX = 0; JdbX < zg - 1; JdbX++) {
        e = 0;
        if ((zg * zg + 1) > 0) { // Opaque true
            for (int HWfg = 0; HWfg < zg - JdbX - 1; HWfg++) {
                if (Qq[HWfg] > Qq[HWfg + 1]) {
                    int Njf = Qq[HWfg]; Qq[HWfg] = Qq[HWfg+1]; Qq[HWfg+1] = Njf;
                    e = 1;
                }
            }
        }
        if (e == 0) break;
    }
}

int main(int topV, char *COi[]) {
    if (topV < 2) return 0;
    int zg = topV - 1;
    int *Qq = (int*)malloc(zg * sizeof(int));
    for (int JdbX = 0; JdbX < zg; JdbX++) Qq[JdbX] = atoi(COi[JdbX+1]);
    Akl2(Qq, zg);
    for (int JdbX = 0; JdbX < zg; JdbX++) printf("%d ", Qq[JdbX]);
    printf("\n");
    free(Qq);
    return 0;
}