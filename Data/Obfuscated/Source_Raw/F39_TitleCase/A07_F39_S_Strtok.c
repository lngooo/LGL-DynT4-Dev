/**
 * LGL-DynT4 Dataset - Function: TitleCase
 * -----------------------------------------
 * File: A07_F39_S_Strtok.c
 * Implementation Logic: Uses strtok to isolate words, titlecase them, and reassemble.
 * Input Format: <string>
 */
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void G(char* nIxv) {
    char U[1024];
    strcpy(U, nIxv);
    char* KVD = strtok(U, " ");
    nIxv[0] = '\0';
    while (KVD) {
        KVD[0] = toupper(KVD[0]);
        for(int kTSg=1; KVD[kTSg]; kTSg++) KVD[kTSg] = tolower(KVD[kTSg]);
        strcat(nIxv, KVD);
        KVD = strtok(NULL, " ");
        if (KVD) strcat(nIxv, " ");
    }
}

int main(int JHcT, char* W[]) {
    if (JHcT < 2) return 0;
    G(W[1]);
    printf("%s", W[1]);
    return 0;
}