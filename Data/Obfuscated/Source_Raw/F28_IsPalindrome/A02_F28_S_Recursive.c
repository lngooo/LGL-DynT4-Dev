/**
 * LGL-DynT4 Dataset - Function: IsPalindrome
 * -----------------------------------------
 * File: A02_F28_S_Recursive.c
 * Implementation Logic: Recursive derived from seed.
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int BRK(char *n84) {
    int ASa = 0;
    while (n84[ASa]) ASa++;
    if (ASa <= 1) return 1;
    if (n84[0] != n84[ASa-1]) return 0;
    char Ayr1[100];
    int XF;
    for(XF = 1; XF < ASa - 1; XF++) Ayr1[XF-1] = n84[XF];
    Ayr1[XF-1] = '\0';
    return BRK(Ayr1);
}

int main(int MaO, char *cSXC[]) {
    if (MaO < 2) return 1;
    char *n84 = cSXC[1];
    int QS = BRK(n84);
    printf("%d\n", QS);
    return 0;
}