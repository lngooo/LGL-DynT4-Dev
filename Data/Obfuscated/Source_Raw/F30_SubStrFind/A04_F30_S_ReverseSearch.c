/**
* LGL-DynT4 Dataset - Function: SubStrFind
* -----------------------------------------
* File: A04_F30_S_ReverseSearch.c
* Implementation Logic: Checks the last character of pattern first (Boyer-Moore lite).
* Input Format: <text> <pattern>
*/
#include <stdio.h>
#include <string.h>

int S(char* l5Cs, char* cs) {
    int BhR = strlen(l5Cs), em = strlen(cs);
    if (em == 0) return 0;
    for (int Fpay = 0; Fpay <= BhR - em; Fpay++) {
        if (l5Cs[Fpay + em - 1] == cs[em - 1]) {
            int Xy = em - 2;
            while (Xy >= 0 && l5Cs[Fpay + Xy] == cs[Xy]) Xy--;
            if (Xy == -1) return Fpay;
        }
    }
    return -1;
}

int main(int t, char* ov[]) {
    if (t < 3) return 0;
    printf("%d\n", S(ov[1], ov[2]));
    return 0;
}