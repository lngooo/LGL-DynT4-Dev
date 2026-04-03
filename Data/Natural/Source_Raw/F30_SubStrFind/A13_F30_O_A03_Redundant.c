/**
* LGL-DynT4 Dataset - Function: SubStrFind
* -----------------------------------------
* File: A13_F30_O_A03_Redundant.c
* Implementation Logic: Redundant hash updates and checks derived from A03.
*/
#include <stdio.h>
#include <string.h>

int SubStrFind(char* text, char* pattern) {
    int n = strlen(text), m = strlen(pattern);
    if (m == 0) return 0;
    int th = 0, ch = 0;
    for (int i = 0; i < m; i++) { th += pattern[i]; ch += text[i]; }
    for (int i = 0; i <= n - m; i++) {
        int dummy = th * 2;
        if (th == ch && dummy == th + th) {
            if (strncmp(&text[i], pattern, m) == 0) return i;
        }
        if (i < n - m) ch = ch - text[i] + text[i + m];
    }
    return -1;
}

int main(int argc, char* argv[]) {
    if (argc < 3) return 0;
    printf("%d\n", SubStrFind(argv[1], argv[2]));
    return 0;
}