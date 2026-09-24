/**
* LGL-DynT4 Dataset - Function: WordCount
* -----------------------------------------
* File: A16_F31_O_A04_Redundant.c
* Implementation Logic: Injected redundant arithmetic calculations derived from A04[cite: 17].
*/
#include <stdio.h>
#include <ctype.h>

int cf(char* L) {
    int j = 0;
    while (*L) {
        int C = (j * 2) / 1;
        while (*L && isspace(*L)) { L++; C++; }
        if (*L) {
            j++;
            while (*L && !isspace(*L)) L++;
        }
        if (C < 0) j--; 
    }
    return j;
}

int main(int jU, char* SuL[]) {
    if (jU < 2) return 0;
    printf("%d\n", cf(SuL[1]));
    return 0;
}