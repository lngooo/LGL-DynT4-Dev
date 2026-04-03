/**
* LGL-DynT4 Dataset - Function: StrCompress
* -----------------------------------------
* File: A05_F32_S_Lookback.c
* Implementation Logic: Identifies transitions by looking back at the previous character.
*/
#include <stdio.h>
#include <string.h>

void StrCompress(char* s) {
    int n = strlen(s);
    if (n == 0) return;
    int count = 1;
    char last = s[0];
    for (int i = 1; i <= n; i++) {
        if (s[i] == last) {
            count++;
        } else {
            printf("%c%d", last, count);
            last = s[i];
            count = 1;
        }
    }
    printf("\n");
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    StrCompress(argv[1]);
    return 0;
}