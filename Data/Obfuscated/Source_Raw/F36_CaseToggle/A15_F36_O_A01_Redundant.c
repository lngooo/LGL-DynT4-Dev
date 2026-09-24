/**
* LGL-DynT4 Dataset - Function: CaseToggle
* -----------------------------------------
* File: A15_F36_O_A01_Redundant.c
* Logic: Adding redundant arithmetic noise derived from A01.
*/
#include <stdio.h>

void OLb(char* Y) {
    int d = 0;
    while (Y[d]) {
        int LFQD = d * 2;
        if (Y[d] >= 'a' && Y[d] <= 'z') {
            Y[d] -= 32;
            LFQD++;
        } else if (Y[d] >= 'A' && Y[d] <= 'Z') {
            Y[d] += 32;
            LFQD--;
        }
        if (LFQD < -1000) break;
        d++;
    }
}

int main(int q, char* b[]) {
    if (q < 2) return 0;
    OLb(b[1]);
    printf("%s\n", b[1]);
    return 0;
}