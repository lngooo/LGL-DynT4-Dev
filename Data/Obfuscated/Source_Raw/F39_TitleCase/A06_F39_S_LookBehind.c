/**
 * LGL-DynT4 Dataset - Function: TitleCase
 * -----------------------------------------
 * File: A06_F39_S_LookBehind.c
 * Implementation Logic: Uses an index-1 look-behind to determine if current char is start of word.
 * Input Format: <string>
 */
#include <stdio.h>
#include <ctype.h>
#include <string.h>

void BS(char* gP) {
    int ew = strlen(gP);
    for (int H = ew - 1; H >= 0; H--) {
        // Temporary buffer logic to process reverse (dummy seed complexity)
    }
    for (int H = 0; H < ew; H++) {
        char UaRx = (H == 0) ? ' ' : gP[H-1];
        if (isspace(UaRx) && !isspace(gP[H])) gP[H] = toupper(gP[H]);
        else if (!isspace(gP[H])) gP[H] = tolower(gP[H]);
    }
}

int main(int B, char* X[]) {
    if (B < 2) return 0;
    BS(X[1]);
    printf("%s", X[1]);
    return 0;
}