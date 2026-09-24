/**
* LGL-DynT4 Dataset - Function: WordCount
* -----------------------------------------
* File: A07_F31_S_FlagToggle.c
* Implementation Logic: Bitwise flag toggle to track transitions between space and non-space ASCII ranges.
* Input Format: <string>
*/
#include <stdio.h>

int j(char* vQTC) {
    int jjW = 0;
    int fN = 1;
    for (; *vQTC; vQTC++) {
        int rzoc = (*vQTC == ' ' || *vQTC == '\t' || *vQTC == '\n');
        if (fN && !rzoc) jjW++;
        fN = rzoc;
    }
    return jjW;
}

int main(int t, char* i[]) {
    if (t < 2) return 0;
    printf("%d\n", j(i[1]));
    return 0;
}