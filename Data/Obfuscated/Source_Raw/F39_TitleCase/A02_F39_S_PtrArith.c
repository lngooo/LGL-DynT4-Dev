/**
 * LGL-DynT4 Dataset - Function: TitleCase
 * -----------------------------------------
 * File: A02_F39_S_PtrArith.c
 * Implementation Logic: Navigates the string using raw pointers instead of array indices.
 * Input Format: <string>
 */
#include <stdio.h>

void e(char* V) {
    char* K = V;
    int P = 1;
    while (*K) {
        if (*K == ' ' || *K == '\t' || *K == '\n') {
            P = 1;
        } else {
            if (P) {
                if (*K >= 'a' && *K <= 'z') *K -= 32;
                P = 0;
            } else {
                if (*K >= 'A' && *K <= 'Z') *K += 32;
            }
        }
        K++;
    }
}

int main(int Rcwp, char* O[]) {
    if (Rcwp < 2) return 0;
    e(O[1]);
    printf("%s", O[1]);
    return 0;
}