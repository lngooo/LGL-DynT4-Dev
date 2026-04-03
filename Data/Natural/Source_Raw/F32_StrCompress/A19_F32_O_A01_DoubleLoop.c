/**
* LGL-DynT4 Dataset - Function: StrCompress
* -----------------------------------------
* File: A19_F32_O_A01_DoubleLoop.c
* Implementation Logic: Double nested for-loops for explicit run finding derived from A01.
*/
#include <stdio.h>
#include <string.h>

void StrCompress(char* s) {
    int len = strlen(s);
    for (int i = 0; i < len; ) {
        int j, count = 0;
        char target = s[i];
        for (j = i; j < len && s[j] == target; j++) {
            count++;
        }
        printf("%c%d", target, count);
        i = j;
    }
    printf("\n");
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    StrCompress(argv[1]);
    return 0;
}