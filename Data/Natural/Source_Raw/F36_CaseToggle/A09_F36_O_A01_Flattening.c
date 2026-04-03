/**
* LGL-DynT4 Dataset - Function: CaseToggle
* -----------------------------------------
* File: A09_F36_O_A01_Flattening.c
* Logic: Control flow flattening using a state machine derived from A01.
*/
#include <stdio.h>

void CaseToggle(char* s) {
    int i = 0, state = 0;
    while (state != -1) {
        switch (state) {
            case 0: state = (s[i] == 0) ? -1 : 1; break;
            case 1: 
                if (s[i] >= 'a' && s[i] <= 'z') s[i] -= 32;
                else if (s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
                state = 2; break;
            case 2: i++; state = 0; break;
        }
    }
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    CaseToggle(argv[1]);
    printf("%s\n", argv[1]);
    return 0;
}