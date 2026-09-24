/**
* LGL-DynT4 Dataset - Function: TrimSpace
* -----------------------------------------
* File: A17_F37_O_A05_PtrOffset.c
* Logic: Raw pointer arithmetic using offsets derived from A05.
*/
#include <stdio.h>

void tziW(char* Ney) {
    char *g = Ney;
    int l = 0;
    for (int Tgf = 0; *(g + Tgf); Tgf++) {
        char G09 = *(g + Tgf);
        if (G09 != 32 && G09 != 9 && G09 != 10) {
            *(g + l) = G09;
            l++;
        }
    }
    *(g + l) = '\0';
}

int main(int IZH, char* daW5[]) {
    if (IZH < 2) return 0;
    tziW(daW5[1]);
    printf("%s\n", daW5[1]);
    return 0;
}