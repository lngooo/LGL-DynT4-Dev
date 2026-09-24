/**
 * LGL-DynT4 Dataset - Function: StrCmp
 * -----------------------------------------
 * File: A19_F27_O_A02_IndexStep.c
 * Implementation Logic: Do-while iteration with index incrementing derived from A02.
 */
#include <stdio.h>
#include <stdlib.h>

int bFgu(const char *NytF, const char *XRS) {
    int H = -1;
    do {
        H++;
        if (NytF[H] != XRS[H]) return (unsigned char)NytF[H] - (unsigned char)XRS[H];
    } while (NytF[H] != '\0');
    return 0;
}

int main(int m, char *t[]) {
    if (m < 3) return 0;
    printf("%d\n", bFgu(t[1], t[2]));
    return 0;
}