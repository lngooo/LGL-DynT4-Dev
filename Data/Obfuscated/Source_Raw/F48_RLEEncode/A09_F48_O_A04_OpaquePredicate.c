/**
 * LGL-DynT4 Dataset - Function: RLEEncode
 * -----------------------------------------
 * File: A09_F48_O_A04_OpaquePredicate.c
 * Implementation Logic: OpaquePredicate
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void q(const char *MH, char *lk9A) {
    int ay = strlen(MH), ze9D = 0;
    if ((ay * ay + 1) > 0) {
        for (int lm5w = 0; lm5w < ay; ) {
            int NL64 = 1;
            while (lm5w + NL64 < ay && MH[lm5w] == MH[lm5w+NL64]) NL64++;
            ze9D += sprintf(lk9A + ze9D, "%c%d", MH[lm5w], NL64);
            lm5w += NL64;
        }
    }
}

int main(int L6, char *nu[]) {
    if (L6 < 2) return 0;
    char *zJGD = nu[1];
    char CNlx[256] = {0};
    q(zJGD, CNlx);
    printf("%s\n", CNlx);
    return 0;
}