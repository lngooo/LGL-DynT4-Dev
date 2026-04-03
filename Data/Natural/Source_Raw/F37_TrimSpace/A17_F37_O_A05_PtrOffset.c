/**
* LGL-DynT4 Dataset - Function: TrimSpace
* -----------------------------------------
* File: A17_F37_O_A05_PtrOffset.c
* Logic: Raw pointer arithmetic using offsets derived from A05.
*/
#include <stdio.h>

void TrimSpace(char* s) {
    char *p = s;
    int d = 0;
    for (int k = 0; *(p + k); k++) {
        char val = *(p + k);
        if (val != 32 && val != 9 && val != 10) {
            *(p + d) = val;
            d++;
        }
    }
    *(p + d) = '\0';
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    TrimSpace(argv[1]);
    printf("%s\n", argv[1]);
    return 0;
}