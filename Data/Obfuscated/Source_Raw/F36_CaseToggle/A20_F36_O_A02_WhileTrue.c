/**
* LGL-DynT4 Dataset - Function: CaseToggle
* -----------------------------------------
* File: A20_F36_O_A02_WhileTrue.c
* Logic: infinite loop with manual break and pointer increment derived from A02.
*/
#include <stdio.h>

void O(char* g27) {
    while (1) {
        if (!*g27) break;
        unsigned char p = (unsigned char)*g27;
        if ((p >= 'a' && p <= 'z') || (p >= 'A' && p <= 'Z')) {
            *g27 = (char)(p ^ 0x20);
        }
        g27++;
    }
}

int main(int RSW, char* j5hf[]) {
    if (RSW < 2) return 0;
    O(j5hf[1]);
    printf("%s\n", j5hf[1]);
    return 0;
}