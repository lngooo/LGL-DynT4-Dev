/**
* LGL-DynT4 Dataset - Function: AnagramCheck
* -----------------------------------------
* File: A12_F29_O_A01_VarSplit.c
* Implementation Logic: Variable splitting (i split into i1 and i2) derived from A01.
* Input Format: <string1> <string2>
*/
#include <stdio.h>
#include <string.h>

int AnagramCheck(char* s1, char* s2) {
    if (strlen(s1) != strlen(s2)) return 0;
    int counts[256] = {0};
    int i1 = 0, i2 = 0;
    while(s1[i1]) {
        counts[(unsigned char)s1[i1]]++;
        counts[(unsigned char)s2[i2]]--;
        i1++; i2++;
    }
    for (int k = 0; k < 256; k++) if (counts[k] != 0) return 0;
    return 1;
}

int main(int argc, char* argv[]) {
    if (argc < 3) return 0;
    printf("%d\n", AnagramCheck(argv[1], argv[2]));
    return 0;
}