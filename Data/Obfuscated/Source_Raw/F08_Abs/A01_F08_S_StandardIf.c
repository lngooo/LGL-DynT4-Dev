/**
 * LGL-DynT4 Dataset - Function: Abs
 * -----------------------------------------
 * File: A01_F08_S_StandardIf.c
 * Implementation Logic: Basic conditional check (Seed 1).
 */
#include <stdio.h>
#include <stdlib.h>

int Y(int GsOT) {
    if (GsOT < 0) {
        return -GsOT;
    }
    return GsOT;
}

int main(int BSzf, char *rf[]) {
    if (BSzf < 2) return 1;
    printf("%d\n", Y(atoi(rf[1])));
    return 0;
}