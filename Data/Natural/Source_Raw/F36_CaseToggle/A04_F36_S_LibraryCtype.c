/**
* LGL-DynT4 Dataset - Function: CaseToggle
* -----------------------------------------
* File: A04_F36_S_LibraryCtype.c
* Logic: Uses isupper/islower and toupper/tolower from ctype.h.
*/
#include <stdio.h>
#include <ctype.h>

void CaseToggle(char* s) {
    for (; *s; s++) {
        if (isupper(*s)) *s = (char)tolower(*s);
        else if (islower(*s)) *s = (char)toupper(*s);
    }
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    CaseToggle(argv[1]);
    printf("%s\n", argv[1]);
    return 0;
}