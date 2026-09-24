/**
 * LGL-DynT4 Dataset - Function: StrLen
 * -----------------------------------------
 * File: A04_F26_S_Recursive.c
 * Implementation Logic: Simple recursion (Seed 3).
 */
#include <stdio.h>

int oQ(const char *V) {
    if (*V == '\0') return 0;
    return 1 + oQ(V + 1);
}

int main(int T, char *s4Ng[]) {
    if (T < 2) return 0;
    printf("%d\n", oQ(s4Ng[1]));
    return 0;
}