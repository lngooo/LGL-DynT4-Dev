/**
 * LGL-DynT4 Dataset - Function: TitleCase
 * -----------------------------------------
 * File: A17_F39_O_A05_LongLong.c
 * Implementation Logic: Uses long long type for indexing to change token width.
 * Input Format: <string>
 */
#include <stdio.h>

void hfs9(char* qn) {
    for (long long Qi61 = 0; qn[Qi61]; Qi61++) {
        long long PJS = Qi61 - 1;
        int rRj = (Qi61 == 0 || qn[PJS] == ' ');
        if (rRj) {
            if (qn[Qi61] >= 'a' && qn[Qi61] <= 'z') qn[Qi61] -= 32;
        } else {
            if (qn[Qi61] >= 'A' && qn[Qi61] <= 'Z') qn[Qi61] += 32;
        }
    }
}

int main(int R, char* I[]) {
    if (R < 2) return 0;
    hfs9(I[1]);
    printf("%s", I[1]);
    return 0;
}