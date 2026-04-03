/**
* LGL-DynT4 Dataset - Function: TrimSpace
* -----------------------------------------
* File: A12_F37_O_A01_VarSplit.c
* Logic: Index j split into j_base and j_offset derived from A01.
*/
#include <stdio.h>
#include <ctype.h>

void TrimSpace(char* s) {
    int i = 0, j_base = 0, j_off = 0;
    while (s[i]) {
        if (!isspace((unsigned char)s[i])) {
            s[j_base + j_off] = s[i];
            if (j_off < 10) j_off++;
            else { j_base += j_off; j_off = 1; }
        }
        i++;
    }
    s[j_base + j_off] = '\0';
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    TrimSpace(argv[1]);
    printf("%s\n", argv[1]);
    return 0;
}