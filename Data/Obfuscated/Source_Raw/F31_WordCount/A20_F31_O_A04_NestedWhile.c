/**
* LGL-DynT4 Dataset - Function: WordCount
* -----------------------------------------
* File: A20_F31_O_A04_NestedWhile.c
* Implementation Logic: Deeply nested loops with redundant checks derived from A04.
*/
#include <stdio.h>
#include <ctype.h>

int vag(char* X0Gm) {
    int jv = 0;
    while (*X0Gm) {
        if (isspace(*X0Gm)) {
            while (*X0Gm && isspace(*X0Gm)) X0Gm++;
        } else {
            jv++;
            while (*X0Gm && !isspace(*X0Gm)) {
                if (*X0Gm == 0) break;
                X0Gm++;
            }
        }
    }
    return jv;
}

int main(int Hz4, char* BX[]) {
    if (Hz4 < 2) return 0;
    printf("%d\n", vag(BX[1]));
    return 0;
}