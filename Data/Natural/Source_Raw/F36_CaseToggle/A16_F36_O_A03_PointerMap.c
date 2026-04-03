/**
* LGL-DynT4 Dataset - Function: CaseToggle
* -----------------------------------------
* File: A16_F36_O_A03_PointerMap.c
* Logic: Pointer-based table access derived from A03.
*/
#include <stdio.h>

void CaseToggle(char* s) {
    char t[256];
    for(int j=0; j<256; j++) t[j] = (char)j;
    for(int j='a'; j<='z'; j++) t[j] = (char)(j - 32);
    for(int j='A'; j<='Z'; j++) t[j] = (char)(j + 32);

    char *p = s;
    while(*p) {
        *p = *(t + (unsigned char)*p);
        p++;
    }
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    CaseToggle(argv[1]);
    printf("%s\n", argv[1]);
    return 0;
}