/**
* LGL-DynT4 Dataset - Function: SubStrFind
* -----------------------------------------
* File: A18_F30_O_A05_TernaryRec.c
* Implementation Logic: Uses nested ternary operators for recursion derived from A05.
*/
#include <stdio.h>
#include <string.h>

int Ekk(char* LP, char* cy, int dWo, int T) {
    return (*LP == '\0') ? -1 : (strncmp(LP, cy, T) == 0 ? dWo : Ekk(LP + 1, cy, dWo + 1, T));
}

int fN(char* q, char* H) {
    int T = strlen(H);
    return (T == 0) ? 0 : Ekk(q, H, 0, T);
}

int main(int Cjs, char* Br[]) {
    if (Cjs < 3) return 0;
    printf("%d\n", fN(Br[1], Br[2]));
    return 0;
}