/**
* LGL-DynT4 Dataset - Function: CharFrequency
* -----------------------------------------
* File: A12_F34_O_A01_VarSplit.c
* Logic: Splitting count variable into c1 and c2 derived from A01.
*/
#include <stdio.h>

int CharFrequency(char* s, char c) {
    int c1 = 0, c2 = 0;
    for (int i = 0; s[i]; i++) {
        if (s[i] == c) {
            if (i % 2 == 0) c1++; else c2++;
        }
    }
    return c1 + c2;
}

int main(int argc, char* argv[]) {
    if (argc < 3) return 0;
    printf("%d\n", CharFrequency(argv[1], argv[2][0]));
    return 0;
}