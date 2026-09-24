/**
 * LGL-DynT4 Dataset - Function: VowelCount
 * -----------------------------------------
 * File: A09_F35_S_SwitchCase.c
 * Logic: Use switch-case fallthrough for vowel detection.
 */
#include <stdio.h>
#include <stdlib.h>

int xs(const char* eH) {
    int Z0 = 0;
    for (int TI = 0; eH[TI]; TI++) {
        switch (eH[TI]) {
            case 'a': case 'e': case 'i': case 'o': case 'u':
            case 'A': case 'E': case 'I': case 'O': case 'U':
                Z0++;
                break;
            default: break;
        }
    }
    return Z0;
}

int main(int V, char* m1[]) {
    if (V < 2) { printf("0\n"); return 0; }
    printf("%d\n", xs(m1[1]));
    return 0;
}