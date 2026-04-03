/**
* LGL-DynT4 Dataset - Function: WordCount
* -----------------------------------------
* File: A18_F31_O_A01_LongLong.c
* Implementation Logic: Uses long long for counters to alter data flow width derived from A01[cite: 18].
*/
#include <stdio.h>
#include <ctype.h>

int WordCount(char* s) {
    long long cnt = 0;
    int st = 0;
    for (; *s; s++) {
        if (isspace(*s)) st = 0;
        else if (st == 0) { st = 1; cnt += 1LL; }
    }
    return (int)cnt;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    printf("%d\n", WordCount(argv[1]));
    return 0;
}