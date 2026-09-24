/**
 * LGL-DynT4 Dataset - Function: Power
 * -----------------------------------------
 * File: A07_F07_S_TailRecursive.c
 * Implementation Logic: Tail-recursive power with accumulator.
 * Input Format: <base> <exp>
 */
#include <stdio.h>
#include <stdlib.h>

int MyN(int Lhww, int exp, int Nl0R) {
    if (exp <= 0) return Nl0R;
    return MyN(Lhww, exp - 1, Nl0R * Lhww);
}

int NLf(int Lhww, int exp) {
    return MyN(Lhww, exp, 1);
}

int main(int uh, char *th[]) {
    if (uh < 3) return 1;
    printf("%d\n", NLf(atoi(th[1]), atoi(th[2])));
    return 0;
}