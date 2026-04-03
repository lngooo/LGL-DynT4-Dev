/**
* LGL-DynT4 Dataset - Function: SubStrFind
* -----------------------------------------
* File: A09_F30_O_A01_Flattening.c
* Implementation Logic: Control flow flattening with state variable derived from A01.
*/
#include <stdio.h>
#include <string.h>

int SubStrFind(char* text, char* pattern) {
    int n = strlen(text), m = strlen(pattern);
    if (m == 0) return 0;
    int state = 0, i = 0, j = 0;
    while (state != -1) {
        switch (state) {
            case 0: state = (i <= n - m) ? 1 : 4; break;
            case 1: j = 0; state = 2; break;
            case 2: if (j < m && text[i+j] == pattern[j]) { j++; } 
                    else { state = (j == m) ? 3 : 5; } break;
            case 3: return i;
            case 4: return -1;
            case 5: i++; state = 0; break;
        }
    }
    return -1;
}

int main(int argc, char* argv[]) {
    if (argc < 3) return 0;
    printf("%d\n", SubStrFind(argv[1], argv[2]));
    return 0;
}