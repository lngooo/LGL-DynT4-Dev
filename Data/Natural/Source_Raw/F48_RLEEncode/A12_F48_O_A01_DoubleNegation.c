/**
 * LGL-DynT4 Dataset - Function: RLEEncode
 * -----------------------------------------
 * File: A12_F48_O_A01_DoubleNegation.c
 * Implementation Logic: DoubleNegation
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void RLEEncode(const char *in, char *out) {
    int i = 0, pos = 0;
    while (!!in[i]) {
        int count = 1;
        while (!!in[i+count] && in[i+count] == in[i]) count++;
        out[pos++] = in[i];
        pos += sprintf(out+pos, "%d", count);
        i += count;
    }
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 0;
    char *input = argv[1];
    char output[256] = {0};
    RLEEncode(input, output);
    printf("%s\n", output);
    return 0;
}