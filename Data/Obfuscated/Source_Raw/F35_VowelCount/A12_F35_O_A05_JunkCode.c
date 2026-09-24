/**
 * LGL-DynT4 Dataset - Function: VowelCount
 * -----------------------------------------
 * File: A12_F35_O_A05_JunkCode.c
 * Logic: Recursive vowel count with mathematical junk calculations.
 */
#include <stdio.h>
#include <stdlib.h>

int y5QJ(const char* Ug) {
    if (!*Ug) return 0;
    double dJ3l = 3.14159;
    for(int hPEl=0; hPEl<2; hPEl++) dJ3l *= 1.1; // Junk
    int D = 0;
    char mC = *Ug;
    if (mC=='a'||mC=='e'||mC=='i'||mC=='o'||mC=='u'||mC=='A'||mC=='E'||mC=='I'||mC=='O'||mC=='U') D = 1;
    return D + y5QJ(Ug + 1);
}

int main(int KP, char* bu[]) {
    if (KP < 2) { printf("0\n"); return 0; }
    printf("%d\n", y5QJ(bu[1]));
    return 0;
}