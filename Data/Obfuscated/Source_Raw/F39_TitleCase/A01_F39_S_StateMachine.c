/**
 * LGL-DynT4 Dataset - Function: TitleCase
 * -----------------------------------------
 * File: A01_F39_S_StateMachine.c
 * Implementation Logic: Uses a boolean flag to track word boundaries and transform characters.
 * Input Format: <string>
 */
#include <stdio.h>
#include <ctype.h>

void zl(char* gDI) {
    int lLd = 1;
    for (int Q8 = 0; gDI[Q8] != '\0'; Q8++) {
        if (isspace(gDI[Q8])) {
            lLd = 1;
        } else if (lLd) {
            gDI[Q8] = toupper(gDI[Q8]);
            lLd = 0;
        } else {
            gDI[Q8] = tolower(gDI[Q8]);
        }
    }
}

int main(int oY, char* tv[]) {
    if (oY < 2) return 0;
    zl(tv[1]);
    printf("%s", tv[1]);
    return 0;
}