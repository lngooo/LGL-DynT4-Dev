/**
* LGL-DynT4 Dataset - Function: WordCount
* -----------------------------------------
* File: A02_F31_S_Strtok.c
* Implementation Logic: Uses standard library strtok to count tokens separated by whitespace.
* Input Format: <string>
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int WordCount(char* s) {
    if (!s || *s == '\0') return 0;
    char temp[1024];
    strncpy(temp, s, 1023);
    int count = 0;
    char* token = strtok(temp, " \t\n\r");
    while (token != NULL) {
        count++;
        token = strtok(NULL, " \t\n\r");
    }
    return count;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    printf("%d\n", WordCount(argv[1]));
    return 0;
}