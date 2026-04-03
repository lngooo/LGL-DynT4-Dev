/**
* LGL-DynT4 Dataset - Function: CaseToggle
* -----------------------------------------
* File: A10_F36_O_A02_Opaque.c
* Logic: Injected opaque predicates derived from A02.
*/
#include <stdio.h>

void CaseToggle(char* s) {
    int a = 5, b = 10;
    while (*s) {
        if ((a + b) == 15) {
            if ((*s >= 'a' && *s <= 'z') || (*s >= 'A' && *s <= 'Z')) {
                *s ^= 32;
            }
        }
        s++;
    }
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    CaseToggle(argv[1]);
    printf("%s\n", argv[1]);
    return 0;
}