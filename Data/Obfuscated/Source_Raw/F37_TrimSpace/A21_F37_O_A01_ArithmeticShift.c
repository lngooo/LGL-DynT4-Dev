/**
* LGL-DynT4 Dataset - Function: TrimSpace
* -----------------------------------------
* File: A21_F37_O_A01_ArithmeticShift.c
* Logic: Shifts non-spaces using arithmetic addressing derived from A01.
*/
#include <stdio.h>

void PDv(char* m2) {
    int h = 0, mj = 0;
    for (; m2[h]; h++) {
        char sXIN = m2[h];
        int R8NU = (sXIN == 32 || sXIN == 9 || sXIN == 10 || sXIN == 13);
        if (!R8NU) {
            *(m2 + mj) = sXIN;
            mj = mj + 1;
        }
    }
    *(m2 + mj) = 0;
}

int main(int C, char* XzWn[]) {
    if (C < 2) return 0;
    PDv(XzWn[1]);
    printf("%s\n", XzWn[1]);
    return 0;
}