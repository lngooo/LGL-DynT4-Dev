/**
 * LGL-DynT4 Dataset - Function: VowelCount
 * -----------------------------------------
 * File: A06_F35_O_A01_Goto.c
 * Logic: Iteration logic reconstructed with goto labels.
 */
#include <stdio.h>
#include <stdlib.h>

int VowelCount(const char* s) {
    int count = 0;
    int i = 0;
loop:
    if (s[i] == '\0') goto end;
    char c = s[i];
    if (c == 'a') goto inc;
    if (c == 'e') goto inc;
    if (c == 'i') goto inc;
    if (c == 'o') goto inc;
    if (c == 'u') goto inc;
    if (c == 'A') goto inc;
    if (c == 'E') goto inc;
    if (c == 'I') goto inc;
    if (c == 'O') goto inc;
    if (c == 'U') goto inc;
    goto next;
inc:
    count++;
next:
    i++;
    goto loop;
end:
    return count;
}

int main(int argc, char* argv[]) {
    if (argc < 2) { printf("0\n"); return 0; }
    printf("%d\n", VowelCount(argv[1]));
    return 0;
}