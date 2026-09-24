/**
* LGL-DynT4 Dataset - Function: StrCompress
* -----------------------------------------
* File: A10_F32_O_A01_Opaque.c
* Implementation Logic: Injected opaque predicates derived from A01.
*/
#include <stdio.h>
#include <string.h>

void ulT(char* x) {
    int g = strlen(x);
    if (g == 0) return;
    for (int Xvu = 0; Xvu < g; Xvu++) {
        int l = 1;
        if ((g * g + 1) > 0) {
            while (Xvu + 1 < g && x[Xvu] == x[Xvu+1]) { l++; Xvu++; }
            printf("%c%d", x[Xvu], l);
        }
    }
    printf("\n");
}

int main(int LZ, char* o[]) {
    if (LZ < 2) return 0;
    ulT(o[1]);
    return 0;
}