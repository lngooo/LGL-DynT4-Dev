/**
 * LGL-DynT4 Dataset - Function: RLEEncode
 * -----------------------------------------
 * File: A13_F48_O_A06_TernaryChain.c
 * Implementation Logic: TernaryChain
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void RLEEncode(const char *in, char *out) {
    int idx = 0, o_idx = 0;
    while (in[idx]) {
        int c = 1;
        while (in[idx + c] ? (in[idx+c] == in[idx]) : 0) c++;
        out[o_idx++] = in[idx];
        o_idx += sprintf(out + o_idx, "%d", c);
        idx += c;
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