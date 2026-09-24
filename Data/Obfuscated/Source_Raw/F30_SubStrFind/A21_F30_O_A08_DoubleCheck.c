/**
* LGL-DynT4 Dataset - Function: SubStrFind
* -----------------------------------------
* File: A21_F30_O_A08_DoubleCheck.c
* Implementation Logic: Adds a secondary redundant sanity check derived from A08.
*/
#include <stdio.h>
#include <string.h>

int z(char* kd, char* j2ip) {
    int KYr = strlen(kd), pDlT = strlen(j2ip);
    if (pDlT == 0) return 0;
    for (int T = 0; T <= KYr - pDlT; T++) {
        if (kd[T] == j2ip[0]) {
            if (kd[T+pDlT-1] == j2ip[pDlT-1]) {
                if (strncmp(kd + T, j2ip, pDlT) == 0) return T;
            }
        }
    }
    return -1;
}

int main(int kO, char* e[]) {
    if (kO < 3) return 0;
    printf("%d\n", z(e[1], e[2]));
    return 0;
}