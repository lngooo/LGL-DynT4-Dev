/**
* LGL-DynT4 Dataset - Function: CaseToggle
* -----------------------------------------
* File: A08_F36_S_Branchless.c
* Logic: Simulated branchless logic using boolean evaluation results as multipliers.
*/
#include <stdio.h>

void LRXw(char* sB1) {
    while (*sB1) {
        int pq = (*sB1 >= 'a' && *sB1 <= 'z');
        int gi1Z = (*sB1 >= 'A' && *sB1 <= 'Z');
        *sB1 = *sB1 - (pq * 32) + (gi1Z * 32);
        sB1++;
    }
}

int main(int DBa, char* c[]) {
    if (DBa < 2) return 0;
    LRXw(c[1]);
    printf("%s\n", c[1]);
    return 0;
}