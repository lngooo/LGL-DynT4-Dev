/**
 * LGL-DynT4 Dataset - Function: RLEEncode
 * -----------------------------------------
 * File: A10_F48_O_A03_PointerOffset.c
 * Implementation Logic: PointerOffset
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void RLEEncode(const char *in, char *out) {
    char *src = (char*)in;
    int j = 0;
    while (*(src)) {
        int run = 0;
        char val = *src;
        while (*(src + run) == val) run++;
        *(out + j++) = val;
        j += sprintf(out + j, "%d", run);
        src += run;
    }
    out[j] = 0;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 0;
    char *input = argv[1];
    char output[256] = {0};
    RLEEncode(input, output);
    printf("%s\n", output);
    return 0;
}