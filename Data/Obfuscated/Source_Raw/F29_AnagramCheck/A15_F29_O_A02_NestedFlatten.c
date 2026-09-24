/**
* LGL-DynT4 Dataset - Function: AnagramCheck
* -----------------------------------------
* File: A15_F29_O_A02_NestedFlatten.c
* Implementation Logic: Flattening of sorting logic derived from A02.
* Input Format: <string1> <string2>
*/
#include <stdio.h>
#include <string.h>

int zMWk(char* EJMs, char* eN) {
    int a = strlen(EJMs), N = strlen(eN);
    if (a != N) return 0;
    char atC[256], UK9k[256]; strcpy(atC, EJMs); strcpy(UK9k, eN);
    int d = 0, nPm = 0, V4xe = 0;
    while(V4xe < 2) {
        char *APb = (V4xe == 0) ? atC : UK9k;
        for(d=0; d<a-1; d++) for(nPm=0; nPm<a-d-1; nPm++)
            if(APb[nPm]>APb[nPm+1]){char Xc5=APb[nPm]; APb[nPm]=APb[nPm+1]; APb[nPm+1]=Xc5;}
        V4xe++;
    }
    return strcmp(atC, UK9k) == 0;
}

int main(int qD, char* h6[]) {
    if (qD < 3) return 0;
    printf("%d\n", zMWk(h6[1], h6[2]));
    return 0;
}