/**
* LGL-DynT4 Dataset - Function: CaseToggle
* -----------------------------------------
* File: A11_F36_O_A01_Goto.c
* Logic: Goto-based loop reconstruction derived from A01.
*/
#include <stdio.h>

void CaseToggle(char* s) {
    int i = 0;
start:
    if (s[i] == 0) goto end;
    if (s[i] < 'A' || s[i] > 'z') goto next;
    if (s[i] >= 'a') { s[i] -= 32; goto next; }
    if (s[i] <= 'Z') { s[i] += 32; goto next; }
next:
    i++;
    goto start;
end:
    return;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    CaseToggle(argv[1]);
    printf("%s\n", argv[1]);
    return 0;
}