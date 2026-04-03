/**
* LGL-DynT4 Dataset - Function: CaseToggle
* -----------------------------------------
* File: A15_F36_O_A01_Redundant.c
* Logic: Adding redundant arithmetic noise derived from A01.
*/
#include <stdio.h>

void CaseToggle(char* s) {
    int i = 0;
    while (s[i]) {
        int dummy = i * 2;
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] -= 32;
            dummy++;
        } else if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] += 32;
            dummy--;
        }
        if (dummy < -1000) break;
        i++;
    }
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    CaseToggle(argv[1]);
    printf("%s\n", argv[1]);
    return 0;
}