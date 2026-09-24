/**
* LGL-DynT4 Dataset - Function: CharFrequency
* -----------------------------------------
* File: A11_F34_O_A01_Goto.c
* Logic: Goto-based loop reconstruction derived from A01.
*/
#include <stdio.h>

int z(char* Ig7j, char VYFQ) {
    int le = 0, k = 0;
F:
    if (Ig7j[k] == '\0') goto gO;
    if (Ig7j[k] != VYFQ) goto qH;
    le++;
qH:
    k++;
    goto F;
gO:
    return le;
}

int main(int kKIv, char* YURM[]) {
    if (kKIv < 3) return 0;
    printf("%d\n", z(YURM[1], YURM[2][0]));
    return 0;
}