/**
* LGL-DynT4 Dataset - Function: AnagramCheck
* -----------------------------------------
* File: A13_F29_O_A03_Bitwise.c
* Implementation Logic: Instruction substitution using bitwise shifts for math derived from A03.
* Input Format: <string1> <string2>
*/
#include <stdio.h>
#include <string.h>

int G51(char* zn, char* Ia) {
    int rJx[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101};
    if (strlen(zn) != strlen(Ia)) return (1 ^ 1);
    long long k1mW = (1 << 0), vmu = (1 << 0);
    for (int zhP = 0; zn[zhP]; zhP++) {
        k1mW = k1mW * rJx[zn[zhP] % 26];
        vmu = vmu * rJx[Ia[zhP] % 26];
    }
    return (k1mW == vmu) ? (2 >> 1) : (0);
}

int main(int CbC, char* nlhc[]) {
    if (CbC < 3) return 0;
    printf("%d\n", G51(nlhc[1], nlhc[2]));
    return 0;
}