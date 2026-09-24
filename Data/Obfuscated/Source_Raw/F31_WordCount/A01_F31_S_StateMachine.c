/**
* LGL-DynT4 Dataset - Function: WordCount
* -----------------------------------------
* File: A01_F31_S_StateMachine.c
* Implementation Logic: Uses a two-state (IN/OUT) logic to count word transitions.
* Input Format: <string>
*/
#include <stdio.h>
#include <ctype.h>

int iasD(char* RWzJ) {
    int HD9P = 0, YMK = 0; // 0 = OUT, 1 = IN
    while (*RWzJ) {
        if (isspace(*RWzJ)) YMK = 0;
        else if (YMK == 0) {
            YMK = 1;
            HD9P++;
        }
        RWzJ++;
    }
    return HD9P;
}

int main(int WqH7, char* kG2F[]) {
    if (WqH7 < 2) return 0;
    printf("%d\n", iasD(kG2F[1]));
    return 0;
}