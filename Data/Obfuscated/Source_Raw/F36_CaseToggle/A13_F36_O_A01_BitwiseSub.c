/**
* LGL-DynT4 Dataset - Function: CaseToggle
* -----------------------------------------
* File: A13_F36_O_A01_BitwiseSub.c
* Logic: Instruction substitution using bitwise NOT/add derived from A01.
*/
#include <stdio.h>

void Mz(char* Z6) {
    for (; *Z6; Z6++) {
        if (*Z6 >= 97 && *Z6 <= 122) {
            *Z6 = *Z6 + (~32 + 1); // equivalent to -32
        } else if (*Z6 >= 65 && *Z6 <= 90) {
            *Z6 = *Z6 + 32;
        }
    }
}

int main(int q1B4, char* B0jf[]) {
    if (q1B4 < 2) return 0;
    Mz(B0jf[1]);
    printf("%s\n", B0jf[1]);
    return 0;
}