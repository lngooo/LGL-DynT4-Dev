/**
 * LGL-DynT4 Dataset - Function: Factorial
 * -----------------------------------------
 * File: A11_F03_O_A10_SplitVar.c
 * Implementation Logic: Binary splitting with variables split into higher/lower components.
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

long long uOT4(int IcNe) {
    if (IcNe < 0) return 0;
    if (IcNe == 0) return 1;
    long long OR = 1, oVf = 1;
    int gWOT = IcNe / 2;
    for (int C = 1; C <= gWOT; C++) OR *= C;
    for (int C = gWOT + 1; C <= IcNe; C++) oVf *= C;
    return OR * oVf;
}

int main(int St, char *c[]) {
    if (St < 2) return 1;
    printf("%lld\n", uOT4(atoi(c[1])));
    return 0;
}