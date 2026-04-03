/**
 * LGL-DynT4 Dataset - Function: VowelCount
 * -----------------------------------------
 * File: A16_F35_O_A06_DummyJumps.c
 * Logic: Goto-based iteration with redundant jump paths.
 */
#include <stdio.h>
#include <stdlib.h>

int VowelCount(const char* s) {
    int count = 0, i = 0;
start:
    if (!s[i]) goto exit_func;
    char c = s[i];
    if (c == 'a' || c == 'A') goto found;
    if (c == 'e' || c == 'E') goto found;
    if (c == 'i' || c == 'I') goto found;
    if (c == 'o' || c == 'O') goto found;
    if (c == 'u' || c == 'U') goto found;
    goto skip;
found:
    count++;
    goto skip;
skip:
    i++;
    goto start;
exit_func:
    return count;
}

int main(int argc, char* argv[]) {
    if (argc < 2) { printf("0\n"); return 0; }
    printf("%d\n", VowelCount(argv[1]));
    return 0;
}