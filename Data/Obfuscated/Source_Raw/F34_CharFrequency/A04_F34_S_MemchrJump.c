/**
* LGL-DynT4 Dataset - Function: CharFrequency
* -----------------------------------------
* File: A04_F34_S_MemchrJump.c
* Logic: Uses standard library memchr to jump between occurrences.
*/
#include <stdio.h>
#include <string.h>

int aa(char* Mz64, char edh1) {
    int Gmef = 0;
    char* Nv = Mz64;
    int d = strlen(Mz64);
    while ((Nv = memchr(Nv, edh1, (Mz64 + d) - Nv)) != NULL) {
        Gmef++;
        Nv++;
    }
    return Gmef;
}

int main(int y, char* N[]) {
    if (y < 3) return 0;
    printf("%d\n", aa(N[1], N[2][0]));
    return 0;
}