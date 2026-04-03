/**
* LGL-DynT4 Dataset - Function: CharFrequency
* -----------------------------------------
* File: A11_F34_O_A01_Goto.c
* Logic: Goto-based loop reconstruction derived from A01.
*/
#include <stdio.h>

int CharFrequency(char* s, char c) {
    int count = 0, i = 0;
check:
    if (s[i] == '\0') goto end;
    if (s[i] != c) goto next;
    count++;
next:
    i++;
    goto check;
end:
    return count;
}

int main(int argc, char* argv[]) {
    if (argc < 3) return 0;
    printf("%d\n", CharFrequency(argv[1], argv[2][0]));
    return 0;
}