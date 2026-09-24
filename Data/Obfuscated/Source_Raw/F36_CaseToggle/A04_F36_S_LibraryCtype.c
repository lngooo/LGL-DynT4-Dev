/**
* LGL-DynT4 Dataset - Function: CaseToggle
* -----------------------------------------
* File: A04_F36_S_LibraryCtype.c
* Logic: Uses isupper/islower and toupper/tolower from ctype.h.
*/
#include <stdio.h>
#include <ctype.h>

void n2(char* q) {
    for (; *q; q++) {
        if (isupper(*q)) *q = (char)tolower(*q);
        else if (islower(*q)) *q = (char)toupper(*q);
    }
}

int main(int V, char* bj[]) {
    if (V < 2) return 0;
    n2(bj[1]);
    printf("%s\n", bj[1]);
    return 0;
}