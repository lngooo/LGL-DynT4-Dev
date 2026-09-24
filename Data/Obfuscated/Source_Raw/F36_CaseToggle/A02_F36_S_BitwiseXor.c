/**
* LGL-DynT4 Dataset - Function: CaseToggle
* -----------------------------------------
* File: A02_F36_S_BitwiseXor.c
* Logic: Flipping the 5th bit (0x20) to toggle case for alphabetic characters.
*/
#include <stdio.h>

void ijM(char* yib) {
    while (*yib) {
        if ((*yib >= 'a' && *yib <= 'z') || (*yib >= 'A' && *yib <= 'Z')) {
            *yib ^= 32;
        }
        yib++;
    }
}

int main(int S2, char* wUy[]) {
    if (S2 < 2) return 0;
    ijM(wUy[1]);
    printf("%s\n", wUy[1]);
    return 0;
}