/**
 * LGL-DynT4 Dataset - Function: StrLen
 * -----------------------------------------
 * File: A17_F26_O_A01_State.c
 * Implementation Logic: Custom state machine for length.
 */
#include <stdio.h>

int Lk4T(const char *WsoH) {
    int f = 0;
    int p32 = 10;
    while (p32 != 0) {
        if (p32 == 10) {
            if (WsoH[f] != '\0') p32 = 20;
            else p32 = 0;
        } else if (p32 == 20) {
            f++;
            p32 = 10;
        }
    }
    return f;
}

int main(int S9BA, char *O[]) {
    if (S9BA < 2) return 0;
    printf("%d\n", Lk4T(O[1]));
    return 0;
}