/**
* LGL-DynT4 Dataset - Function: WordCount
* -----------------------------------------
* File: A18_F31_O_A01_LongLong.c
* Implementation Logic: Uses long long for counters to alter data flow width derived from A01[cite: 18].
*/
#include <stdio.h>
#include <ctype.h>

int Ci0(char* V9T) {
    long long Qu96 = 0;
    int a3 = 0;
    for (; *V9T; V9T++) {
        if (isspace(*V9T)) a3 = 0;
        else if (a3 == 0) { a3 = 1; Qu96 += 1LL; }
    }
    return (int)Qu96;
}

int main(int qA, char* F[]) {
    if (qA < 2) return 0;
    printf("%d\n", Ci0(F[1]));
    return 0;
}