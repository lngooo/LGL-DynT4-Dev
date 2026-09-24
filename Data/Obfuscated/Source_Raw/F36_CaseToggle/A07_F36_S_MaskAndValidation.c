/**
* LGL-DynT4 Dataset - Function: CaseToggle
* -----------------------------------------
* File: A07_F36_S_MaskAndValidation.c
* Logic: Bitmasking to isolate the letter and applying logic XOR only on alpha range.
*/
#include <stdio.h>

void RO(char* o) {
    for (int cpd = 0; o[cpd]; cpd++) {
        unsigned char b = (unsigned char)o[cpd];
        unsigned char z9F = b | 32;
        if (z9F >= 'a' && z9F <= 'z') {
            o[cpd] = (char)(b ^ 32);
        }
    }
}

int main(int xB5Y, char* Nex[]) {
    if (xB5Y < 2) return 0;
    RO(Nex[1]);
    printf("%s\n", Nex[1]);
    return 0;
}