/**
* LGL-DynT4 Dataset - Function: CaseToggle
* -----------------------------------------
* File: A06_F36_S_PointerDiff.c
* Logic: Uses pointer subtraction to calculate indices for case shifting.
*/
#include <stdio.h>

void B(char* LbAo) {
    char *i3 = LbAo;
    while (*i3) {
        char HP8 = *i3;
        if (HP8 >= 65 && HP8 <= 90) *i3 = HP8 + (97 - 65);
        else if (HP8 >= 97 && HP8 <= 122) *i3 = HP8 - (97 - 65);
        i3++;
    }
}

int main(int v, char* q83[]) {
    if (v < 2) return 0;
    B(q83[1]);
    printf("%s\n", q83[1]);
    return 0;
}