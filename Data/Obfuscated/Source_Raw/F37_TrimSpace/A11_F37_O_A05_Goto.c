/**
* LGL-DynT4 Dataset - Function: TrimSpace
* -----------------------------------------
* File: A11_F37_O_A05_Goto.c
* Logic: Goto-based reconstruction of pointer logic derived from A05.
*/
#include <stdio.h>

void uN(char* zO) {
    char *qIBN = zO, *SL = zO;
SNJC:
    if (!*qIBN) goto GyK;
    if (*qIBN == 32 || (*qIBN >= 9 && *qIBN <= 13)) goto S53;
    *SL = *qIBN;
    SL++;
S53:
    qIBN++;
    goto SNJC;
GyK:
    *SL = '\0';
}

int main(int u, char* Lqu[]) {
    if (u < 2) return 0;
    uN(Lqu[1]);
    printf("%s\n", Lqu[1]);
    return 0;
}