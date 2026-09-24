/**
* LGL-DynT4 Dataset - Function: WordCount
* -----------------------------------------
* File: A14_F31_O_A01_FakeLoop.c
* Implementation Logic: Added fake control flow that never executes derived from A01.
*/
#include <stdio.h>
#include <ctype.h>

int vgc(char* c) {
    int m = 0, z0 = 0;
    for (int grLs = 0; grLs < 1; grLs++) {
        while (*c) {
            if (isspace(*c)) z0 = 0;
            else if (z0 == 0) { z0 = 1; m++; }
            c++;
            if (grLs > 10) break; 
        }
    }
    return m;
}

int main(int N, char* ieD[]) {
    if (N < 2) return 0;
    printf("%d\n", vgc(ieD[1]));
    return 0;
}