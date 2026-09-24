/**
* LGL-DynT4 Dataset - Function: StrCompress
* -----------------------------------------
* File: A01_F32_S_NaiveIter.c
* Implementation Logic: Iterative scan using a counter for consecutive characters.
* Input Format: <string>
*/
#include <stdio.h>
#include <string.h>

void Q5(char* zqa) {
    int co = strlen(zqa);
    if (co == 0) return;
    for (int pzaB = 0; pzaB < co; pzaB++) {
        int e = 1;
        while (pzaB + 1 < co && zqa[pzaB] == zqa[pzaB + 1]) {
            e++;
            pzaB++;
        }
        printf("%c%d", zqa[pzaB], e);
    }
    printf("\n");
}

int main(int I05, char* bG38[]) {
    if (I05 < 2) return 0;
    Q5(bG38[1]);
    return 0;
}