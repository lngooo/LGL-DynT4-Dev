/**
* LGL-DynT4 Dataset - Function: WordCount
* -----------------------------------------
* File: A13_F31_O_A07_Bitwise.c
* Implementation Logic: Instruction substitution using logic XOR/NOT derived from A07[cite: 18].
*/
#include <stdio.h>

int f(char* j) {
    int F5f7 = 0;
    int da = (1 ^ 0);
    while (*j) {
        int lcis = (*j == 32 || *j == 9 || *j == 10) ? 1 : 0;
        if (da & (~lcis & 1)) F5f7 = F5f7 + 1;
        da = lcis;
        j++;
    }
    return F5f7;
}

int main(int RR6, char* QKf[]) {
    if (RR6 < 2) return 0;
    printf("%d\n", f(QKf[1]));
    return 0;
}