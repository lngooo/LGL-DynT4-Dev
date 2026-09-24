/**
* LGL-DynT4 Dataset - Function: CaseToggle
* -----------------------------------------
* File: A05_F36_S_Recursive.c
* Logic: Recursive transformation of the string head.
*/
#include <stdio.h>

void dBhx(char* Eo) {
    if (!*Eo) return;
    if (*Eo >= 'a' && *Eo <= 'z') *Eo -= 32;
    else if (*Eo >= 'A' && *Eo <= 'Z') *Eo += 32;
    dBhx(Eo + 1);
}

int main(int rdkM, char* C[]) {
    if (rdkM < 2) return 0;
    dBhx(C[1]);
    printf("%s\n", C[1]);
    return 0;
}