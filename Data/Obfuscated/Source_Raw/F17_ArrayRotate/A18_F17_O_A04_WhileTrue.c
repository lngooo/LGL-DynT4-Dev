/**
 * LGL-DynT4 Dataset - Function: ArrayRotate
 * -----------------------------------------
 * File: A18_F17_O_A04_WhileTrue.c
 * Logic: Step-by-step rotate using while(1).
 */
#include <stdio.h>
#include <stdlib.h>

void Qk8(int Tehj[], int Ym, int Iy) {
    if (Ym == 0) return;
    Iy %= Ym;
    int uMB = 0;
    while(1) {
        if(uMB >= Iy) break;
        int cW = Tehj[0], Is = 0;
        while(1) {
            if(Is >= Ym - 1) break;
            Tehj[Is] = Tehj[Is+1]; Is++;
        }
        Tehj[Ym-1] = cW; uMB++;
    }
}

int main(int up, char *O[]) {
    if (up < 3) return 0;
    int Iy = atoi(O[1]);
    int Ym = up - 2;
    int *Tehj = (int*)malloc(Ym * sizeof(int));
    for(int uMB=0; uMB<Ym; uMB++) Tehj[uMB] = atoi(O[uMB+2]);
    Qk8(Tehj, Ym, Iy);
    for(int uMB=0; uMB<Ym; uMB++) printf("%d ", Tehj[uMB]);
    printf("\n");
    free(Tehj);
    return 0;
}