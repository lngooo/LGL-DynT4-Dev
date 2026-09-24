/**
* LGL-DynT4 Dataset - Function: AnagramCheck
* -----------------------------------------
* File: A11_F29_O_A05_Goto.c
* Implementation Logic: Deconstruction of loops into goto-labels derived from A05.
* Input Format: <string1> <string2>
*/
#include <stdio.h>
#include <string.h>

int vWeF(char* IdHA, char* SjJ0) {
    if (strlen(IdHA) != strlen(SjJ0)) return 0;
    int n = 0, khW6 = 0, opd = 0;
d:
    if (!IdHA[opd]) goto Ec;
    n ^= IdHA[opd]; n ^= SjJ0[opd];
    khW6 += IdHA[opd]; khW6 -= SjJ0[opd];
    opd++;
    goto d;
Ec:
    return (n == 0 && khW6 == 0);
}

int main(int o, char* j9[]) {
    if (o < 3) return 0;
    printf("%d\n", vWeF(j9[1], j9[2]));
    return 0;
}