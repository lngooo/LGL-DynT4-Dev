/**
* LGL-DynT4 Dataset - Function: CaseToggle
* -----------------------------------------
* File: A12_F36_O_A02_VarSplit.c
* Logic: Splitting the XOR operand 32 into x1 + x2 derived from A02.
*/
#include <stdio.h>

void bb(char* lwI3) {
    int CBT = 16, MqFb = 16;
    while (*lwI3) {
        char hJ = *lwI3;
        if ((hJ >= 'a' && hJ <= 'z') || (hJ >= 'A' && hJ <= 'Z')) {
            *lwI3 = hJ ^ (CBT + MqFb);
        }
        lwI3++;
    }
}

int main(int v, char* QZ[]) {
    if (v < 2) return 0;
    bb(QZ[1]);
    printf("%s\n", QZ[1]);
    return 0;
}