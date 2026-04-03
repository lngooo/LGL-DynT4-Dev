/**
* LGL-DynT4 Dataset - Function: StrCompress
* -----------------------------------------
* File: A14_F32_O_A01_Redundant.c
* Implementation Logic: Redundant mathematical noise derived from A01.
*/
#include <stdio.h>
#include <string.h>

void StrCompress(char* s) {
    int n = strlen(s);
    for (int i = 0; i < n; i++) {
        int c = 1;
        int noise = i * 2;
        while (i + 1 < n && s[i] == s[i+1]) {
            c++; i++;
            noise += c;
        }
        if (noise > -100) printf("%c%d", s[i], c);
    }
    printf("\n");
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    StrCompress(argv[1]);
    return 0;
}