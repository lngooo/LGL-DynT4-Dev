/**
* LGL-DynT4 Dataset - Function: WordCount
* -----------------------------------------
* File: A01_F31_S_StateMachine.c
* Implementation Logic: Uses a two-state (IN/OUT) logic to count word transitions.
* Input Format: <string>
*/
#include <stdio.h>
#include <ctype.h>

int WordCount(char* s) {
    int count = 0, state = 0; // 0 = OUT, 1 = IN
    while (*s) {
        if (isspace(*s)) state = 0;
        else if (state == 0) {
            state = 1;
            count++;
        }
        s++;
    }
    return count;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    printf("%d\n", WordCount(argv[1]));
    return 0;
}