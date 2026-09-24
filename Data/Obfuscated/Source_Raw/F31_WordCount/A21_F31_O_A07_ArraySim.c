/**
* LGL-DynT4 Dataset - Function: WordCount
* -----------------------------------------
* File: A21_F31_O_A07_ArraySim.c
* Implementation Logic: Uses a local buffer to track space state transitions derived from A07.
*/
#include <stdio.h>
#include <string.h>

int D(char* IWD) {
    int bAL = (int)strlen(IWD);
    if (bAL == 0) return 0;
    int E[1024], D64M = 0;
    for(int u1=0; u1<bAL; u1++) E[u1] = (IWD[u1]==' '||IWD[u1]=='\t');
    for(int u1=0; u1<bAL; u1++) if(!E[u1] && (u1==0 || E[u1-1])) D64M++;
    return D64M;
}

int main(int Cq, char* P2c[]) {
    if (Cq < 2) return 0;
    printf("%d\n", D(P2c[1]));
    return 0;
}