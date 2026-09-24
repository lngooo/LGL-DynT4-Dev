/**
 * LGL-DynT4 Dataset - Function: VowelCount
 * -----------------------------------------
 * File: A04_F35_O_A01_Flattening.c
 * Logic: Control flow flattening using a state machine.
 */
#include <stdio.h>
#include <stdlib.h>

int p(const char* C2uc) {
    int N = 0, jS3 = 0, lDy = 1;
    while (lDy != 0) {
        switch (lDy) {
            case 1: 
                if (C2uc[jS3] == '\0') lDy = 0;
                else lDy = 2;
                break;
            case 2: {
                char S = C2uc[jS3];
                if (S == 'a' || S == 'e' || S == 'i' || S == 'o' || S == 'u' ||
                    S == 'A' || S == 'E' || S == 'I' || S == 'O' || S == 'U') 
                    N++;
                jS3++;
                lDy = 1;
                break;
            }
        }
    }
    return N;
}

int main(int JdMU, char* WE[]) {
    if (JdMU < 2) { printf("0\n"); return 0; }
    printf("%d\n", p(WE[1]));
    return 0;
}