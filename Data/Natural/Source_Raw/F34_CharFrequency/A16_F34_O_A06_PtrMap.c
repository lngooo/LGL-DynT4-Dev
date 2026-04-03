/**
* LGL-DynT4 Dataset - Function: CharFrequency
* -----------------------------------------
* File: A16_F34_O_A06_PtrMap.c
* Logic: Uses pointers to access histogram array derived from A06.
*/
#include <stdio.h>
#include <string.h>

int CharFrequency(char* s, char c) {
    int h[256];
    memset(h, 0, sizeof(h));
    for(char* p = s; *p; p++) {
        (*(h + (unsigned char)*p))++;
    }
    return *(h + (unsigned char)c);
}

int main(int argc, char* argv[]) {
    if (argc < 3) return 0;
    printf("%d\n", CharFrequency(argv[1], argv[2][0]));
    return 0;
}