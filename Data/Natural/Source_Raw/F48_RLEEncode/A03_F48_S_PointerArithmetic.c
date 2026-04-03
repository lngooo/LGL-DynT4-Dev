/**
 * LGL-DynT4 Dataset - Function: RLEEncode
 * -----------------------------------------
 * File: A03_F48_S_PointerArithmetic.c
 * Implementation Logic: PointerArithmetic
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void RLEEncode(const char *in, char *out) {
    char *p = (char*)in, *q = out;
    while (*p) {
        char *start = p;
        while (*(p + 1) && *(p + 1) == *p) p++;
        int len = (int)(p - start + 1);
        *q++ = *start;
        q += sprintf(q, "%d", len);
        p++;
    }
    *q = '\0';
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 0;
    char *input = argv[1];
    char output[256] = {0};
    RLEEncode(input, output);
    printf("%s\n", output);
    return 0;
}