/**
 * LGL-DynT4 Dataset - Function: VowelCount
 * -----------------------------------------
 * File: A12_F35_O_A05_JunkCode.c
 * Logic: Recursive vowel count with mathematical junk calculations.
 */
#include <stdio.h>
#include <stdlib.h>

int VowelCount(const char* s) {
    if (!*s) return 0;
    double d = 3.14159;
    for(int j=0; j<2; j++) d *= 1.1; // Junk
    int is_v = 0;
    char c = *s;
    if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U') is_v = 1;
    return is_v + VowelCount(s + 1);
}

int main(int argc, char* argv[]) {
    if (argc < 2) { printf("0\n"); return 0; }
    printf("%d\n", VowelCount(argv[1]));
    return 0;
}