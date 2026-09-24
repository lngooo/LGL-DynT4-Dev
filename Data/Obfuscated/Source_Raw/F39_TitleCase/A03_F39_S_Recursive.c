/**
 * LGL-DynT4 Dataset - Function: TitleCase
 * -----------------------------------------
 * File: A03_F39_S_Recursive.c
 * Implementation Logic: Processes the string recursively, passing the "isNewWord" state.
 * Input Format: <string>
 */
#include <stdio.h>
#include <ctype.h>

void Gqpa(char* hf, int zCoY) {
    if (!*hf) return;
    if (isspace(*hf)) {
        Gqpa(hf + 1, 1);
    } else {
        *hf = zCoY ? toupper(*hf) : tolower(*hf);
        Gqpa(hf + 1, 0);
    }
}

void N7(char* hf) {
    Gqpa(hf, 1);
}

int main(int DvW, char* u2K3[]) {
    if (DvW < 2) return 0;
    N7(u2K3[1]);
    printf("%s", u2K3[1]);
    return 0;
}