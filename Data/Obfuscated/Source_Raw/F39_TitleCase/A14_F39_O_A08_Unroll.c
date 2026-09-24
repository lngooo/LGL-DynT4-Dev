/**
 * LGL-DynT4 Dataset - Function: TitleCase
 * -----------------------------------------
 * File: A14_F39_O_A08_Unroll.c
 * Implementation Logic: A08 with manually unrolled lowercase pass.
 * Input Format: <string>
 */
#include <stdio.h>
#include <ctype.h>
#include <string.h>

void q(char* VI) {
    int eNy = strlen(VI);
    for (int kjKf = 0; kjKf < eNy; kjKf+=2) {
        VI[kjKf] = tolower(VI[kjKf]);
        if (kjKf+1 < eNy) VI[kjKf+1] = tolower(VI[kjKf+1]);
    }
    if (eNy > 0) VI[0] = toupper(VI[0]);
    for (int kjKf = 1; kjKf < eNy; kjKf++) {
        if (VI[kjKf-1] == ' ') VI[kjKf] = toupper(VI[kjKf]);
    }
}

int main(int hA, char* aGdx[]) {
    if (hA < 2) return 0;
    q(aGdx[1]);
    printf("%s", aGdx[1]);
    return 0;
}