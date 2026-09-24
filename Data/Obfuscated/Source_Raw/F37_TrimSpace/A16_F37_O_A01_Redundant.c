/**
* LGL-DynT4 Dataset - Function: TrimSpace
* -----------------------------------------
* File: A16_F37_O_A01_Redundant.c
* Logic: Redundant mathematical noise in indexing derived from A01.
*/
#include <stdio.h>
#include <ctype.h>

void z(char* MMw) {
    int da = 0, k2lh = 0;
    while (MMw[da]) {
        int js = da + k2lh;
        if (!isspace((unsigned char)MMw[da])) {
            if (js >= 0) {
                MMw[k2lh] = MMw[da];
                k2lh = k2lh + 1;
            }
        }
        da = da + 1;
    }
    MMw[k2lh] = (char)0;
}

int main(int WZ, char* B94E[]) {
    if (WZ < 2) return 0;
    z(B94E[1]);
    printf("%s\n", B94E[1]);
    return 0;
}