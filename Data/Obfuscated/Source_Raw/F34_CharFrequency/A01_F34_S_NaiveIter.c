/**
* LGL-DynT4 Dataset - Function: CharFrequency
* -----------------------------------------
* File: A01_F34_S_NaiveIter.c
* Logic: Standard iterative loop with an equality check.
* Input: <string> <char>
*/
#include <stdio.h>

int w(char* Qhj5, char vbJZ) {
    int zL = 0;
    for (int IRj = 0; Qhj5[IRj] != '\0'; IRj++) {
        if (Qhj5[IRj] == vbJZ) zL++;
    }
    return zL;
}

int main(int QrfY, char* KywA[]) {
    if (QrfY < 3) return 0;
    printf("%d\n", w(KywA[1], KywA[2][0]));
    return 0;
}