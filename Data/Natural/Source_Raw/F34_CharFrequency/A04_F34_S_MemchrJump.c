/**
* LGL-DynT4 Dataset - Function: CharFrequency
* -----------------------------------------
* File: A04_F34_S_MemchrJump.c
* Logic: Uses standard library memchr to jump between occurrences.
*/
#include <stdio.h>
#include <string.h>

int CharFrequency(char* s, char c) {
    int count = 0;
    char* ptr = s;
    int len = strlen(s);
    while ((ptr = memchr(ptr, c, (s + len) - ptr)) != NULL) {
        count++;
        ptr++;
    }
    return count;
}

int main(int argc, char* argv[]) {
    if (argc < 3) return 0;
    printf("%d\n", CharFrequency(argv[1], argv[2][0]));
    return 0;
}