/**
 * LGL-DynT4 Dataset - Function: TitleCase
 * -----------------------------------------
 * File: A11_F39_O_A02_Goto.c
 * Implementation Logic: Pointer-based implementation of A02 using goto labels for control flow.
 * Input Format: <string>
 */
#include <stdio.h>

void i(char* O) {
    char* dr = O;
    int o2 = 1;
iT:
    if (!*dr) return;
    if (*dr == ' ') { o2 = 1; goto Fw27; }
    if (o2) { if(*dr >= 'a') *dr -= 32; o2 = 0; }
    else { if(*dr <= 'Z' && *dr >= 'A') *dr += 32; }
Fw27:
    dr++;
    goto iT;
}

int main(int S4, char* Tmc[]) {
    if (S4 < 2) return 0;
    i(Tmc[1]);
    printf("%s", Tmc[1]);
    return 0;
}