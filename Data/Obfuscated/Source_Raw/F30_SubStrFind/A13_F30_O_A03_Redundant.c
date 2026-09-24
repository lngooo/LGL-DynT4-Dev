/**
* LGL-DynT4 Dataset - Function: SubStrFind
* -----------------------------------------
* File: A13_F30_O_A03_Redundant.c
* Implementation Logic: Redundant hash updates and checks derived from A03.
*/
#include <stdio.h>
#include <string.h>

int FD7(char* GKA, char* rd) {
    int OFMg = strlen(GKA), Byuh = strlen(rd);
    if (Byuh == 0) return 0;
    int lh = 0, WZd = 0;
    for (int e = 0; e < Byuh; e++) { lh += rd[e]; WZd += GKA[e]; }
    for (int e = 0; e <= OFMg - Byuh; e++) {
        int gJI = lh * 2;
        if (lh == WZd && gJI == lh + lh) {
            if (strncmp(&GKA[e], rd, Byuh) == 0) return e;
        }
        if (e < OFMg - Byuh) WZd = WZd - GKA[e] + GKA[e + Byuh];
    }
    return -1;
}

int main(int iYg, char* nc5Q[]) {
    if (iYg < 3) return 0;
    printf("%d\n", FD7(nc5Q[1], nc5Q[2]));
    return 0;
}