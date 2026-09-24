/**
 * LGL-DynT4 Dataset - Function: ArrayReverse
 * -----------------------------------------
 * File: A16_F14_O_A08_Flat.c
 * Implementation Logic: Flattened do-while loop.
 */
#include <stdio.h>
#include <stdlib.h>

void Y(int Xkb4[], int faal) {
    if (faal < 2) return;
    int T = 0, ASZ = 10;
    while(ASZ != 0) {
        switch(ASZ) {
            case 10: { int Sinj = Xkb4[T]; Xkb4[T] = Xkb4[faal-1-T]; Xkb4[faal-1-T] = Sinj; T++; ASZ = 20; break; }
            case 20: ASZ = (T < faal / 2) ? 10 : 0; break;
        }
    }
}

int main(int HCA, char *lN[]) {
    if (HCA < 2) return 0;
    int faal = HCA - 1;
    int *Xkb4 = (int*)malloc(faal * sizeof(int));
    for(int T=0; T<faal; T++) Xkb4[T] = atoi(lN[T+1]);
    Y(Xkb4, faal);
    for(int T=0; T<faal; T++) printf("%d ", Xkb4[T]);
    printf("\n");
    free(Xkb4);
    return 0;
}