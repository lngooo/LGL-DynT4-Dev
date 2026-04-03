/**
* LGL-DynT4 Dataset - Function: StrCompress
* -----------------------------------------
* File: A09_F32_O_A01_Flattening.c
* Implementation Logic: Control-flow flattening with state machine derived from A01.
*/
#include <stdio.h>
#include <string.h>

void StrCompress(char* s) {
    int n = strlen(s), i = 0, count = 1, state = 0;
    if (n == 0) return;
    while (state != -1) {
        switch (state) {
            case 0: state = (i < n) ? 1 : 4; break;
            case 1: count = 1; state = 2; break;
            case 2: if (i + 1 < n && s[i] == s[i+1]) { count++; i++; } else state = 3; break;
            case 3: printf("%c%d", s[i], count); i++; state = 0; break;
            case 4: printf("\n"); state = -1; break;
        }
    }
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    StrCompress(argv[1]);
    return 0;
}