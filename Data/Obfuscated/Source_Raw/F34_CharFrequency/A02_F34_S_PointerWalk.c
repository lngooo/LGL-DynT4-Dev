/**
* LGL-DynT4 Dataset - Function: CharFrequency
* -----------------------------------------
* File: A02_F34_S_PointerWalk.c
* Logic: Pointer incrementation and dereferencing.
*/
#include <stdio.h>

int n(char* J, char ZBgR) {
    int Xm = 0;
    while (*J) {
        if (*J == ZBgR) Xm++;
        J++;
    }
    return Xm;
}

int main(int Kv7, char* q[]) {
    if (Kv7 < 3) return 0;
    printf("%d\n", n(q[1], q[2][0]));
    return 0;
}