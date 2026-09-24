/**
* LGL-DynT4 Dataset - Function: CaseToggle
* -----------------------------------------
* File: A11_F36_O_A01_Goto.c
* Logic: Goto-based loop reconstruction derived from A01.
*/
#include <stdio.h>

void D(char* m) {
    int A = 0;
gpdD:
    if (m[A] == 0) goto vf;
    if (m[A] < 'A' || m[A] > 'z') goto H9r;
    if (m[A] >= 'a') { m[A] -= 32; goto H9r; }
    if (m[A] <= 'Z') { m[A] += 32; goto H9r; }
H9r:
    A++;
    goto gpdD;
vf:
    return;
}

int main(int tmZz, char* hT[]) {
    if (tmZz < 2) return 0;
    D(hT[1]);
    printf("%s\n", hT[1]);
    return 0;
}