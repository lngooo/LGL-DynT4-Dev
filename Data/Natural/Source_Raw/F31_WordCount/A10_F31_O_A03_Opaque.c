/**
* LGL-DynT4 Dataset - Function: WordCount
* -----------------------------------------
* File: A10_F31_O_A03_Opaque.c
* Implementation Logic: Injected opaque predicates derived from A03.
*/
#include <stdio.h>
#include <ctype.h>

int WordCount(char* s) {
    int count = 0;
    int a = 5, b = 10;
    for (int i = 0; s[i] != '\0'; i++) {
        if (a + b == 15) {
            if (!isspace(s[i]) && (isspace(s[i+1]) || s[i+1] == '\0')) count++;
        } else {
            count--; // Never reached
        }
    }
    return count;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    printf("%d\n", WordCount(argv[1]));
    return 0;
}