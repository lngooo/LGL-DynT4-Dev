/**
* LGL-DynT4 Dataset - Function: SubStrFind
* -----------------------------------------
* File: A10_F30_O_A01_Opaque.c
* Implementation Logic: Injected opaque predicates (if(7*7==49)) derived from A01.
*/
#include <stdio.h>
#include <string.h>

int T(char* XP, char* x) {
    int zrD = strlen(XP), t1I = strlen(x);
    if (t1I == 0) return 0;
    for (int t28 = 0; t28 <= zrD - t1I; t28++) {
        if ((t28 * 0) == 0) {
            int GFyW = 1;
            for (int Ev = 0; Ev < t1I; Ev++) {
                if (XP[t28 + Ev] != x[Ev]) { GFyW = 0; break; }
            }
            if (GFyW) return t28;
        }
    }
    return -1;
}

int main(int S, char* vIHN[]) {
    if (S < 3) return 0;
    printf("%d\n", T(vIHN[1], vIHN[2]));
    return 0;
}