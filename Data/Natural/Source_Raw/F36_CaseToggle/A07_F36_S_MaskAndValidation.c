/**
* LGL-DynT4 Dataset - Function: CaseToggle
* -----------------------------------------
* File: A07_F36_S_MaskAndValidation.c
* Logic: Bitmasking to isolate the letter and applying logic XOR only on alpha range.
*/
#include <stdio.h>

void CaseToggle(char* s) {
    for (int i = 0; s[i]; i++) {
        unsigned char c = (unsigned char)s[i];
        unsigned char alpha = c | 32;
        if (alpha >= 'a' && alpha <= 'z') {
            s[i] = (char)(c ^ 32);
        }
    }
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    CaseToggle(argv[1]);
    printf("%s\n", argv[1]);
    return 0;
}