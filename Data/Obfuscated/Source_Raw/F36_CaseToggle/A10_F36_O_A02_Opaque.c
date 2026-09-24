/**
* LGL-DynT4 Dataset - Function: CaseToggle
* -----------------------------------------
* File: A10_F36_O_A02_Opaque.c
* Logic: Injected opaque predicates derived from A02.
*/
#include <stdio.h>

void kBHc(char* H) {
    int Z = 5, Cgj = 10;
    while (*H) {
        if ((Z + Cgj) == 15) {
            if ((*H >= 'a' && *H <= 'z') || (*H >= 'A' && *H <= 'Z')) {
                *H ^= 32;
            }
        }
        H++;
    }
}

int main(int U, char* v[]) {
    if (U < 2) return 0;
    kBHc(v[1]);
    printf("%s\n", v[1]);
    return 0;
}