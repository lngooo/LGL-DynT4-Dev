/**
* LGL-DynT4 Dataset - Function: SubStrFind
* -----------------------------------------
* File: A20_F30_O_A07_WhileTrue.c
* Implementation Logic: Replaces strchr loop with while(1) + manual break derived from A07.
*/
#include <stdio.h>
#include <string.h>

int e(char* r, char* Ih) {
    char* JWxU = r;
    int jI = strlen(Ih);
    if (jI == 0) return 0;
    while (1) {
        JWxU = strchr(JWxU, Ih[0]);
        if (!JWxU) break;
        int pY = 1;
        for(int u=0; u<jI; u++) if(JWxU[u] != Ih[u]) pY = 0;
        if (pY) return (int)(JWxU - r);
        JWxU++;
    }
    return -1;
}

int main(int Xr, char* G[]) {
    if (Xr < 3) return 0;
    printf("%d\n", e(G[1], G[2]));
    return 0;
}