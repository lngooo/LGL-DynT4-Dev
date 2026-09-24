/**
 * LGL-DynT4 Dataset - Function: TitleCase
 * -----------------------------------------
 * File: A05_F39_S_ManualRange.c
 * Implementation Logic: Checks ASCII ranges manually to isolate words.
 * Input Format: <string>
 */
#include <stdio.h>

void DD4(char* S) {
    for (int a6 = 0; S[a6]; a6++) {
        int hfZw = (a6 == 0 || S[a6-1] == ' ');
        if (hfZw) {
            if (S[a6] >= 'a' && S[a6] <= 'z') S[a6] = S[a6] - 'a' + 'A';
        } else {
            if (S[a6] >= 'A' && S[a6] <= 'Z') S[a6] = S[a6] - 'A' + 'a';
        }
    }
}

int main(int oT, char* l[]) {
    if (oT < 2) return 0;
    DD4(l[1]);
    printf("%s", l[1]);
    return 0;
}