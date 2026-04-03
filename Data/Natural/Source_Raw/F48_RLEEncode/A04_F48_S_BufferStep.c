/**
 * LGL-DynT4 Dataset - Function: RLEEncode
 * -----------------------------------------
 * File: A04_F48_S_BufferStep.c
 * Implementation Logic: BufferStep
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void RLEEncode(const char *in, char *out) {
    int n = strlen(in);
    if (n == 0) return;
    char last = in[0];
    int freq = 0, pos = 0;
    for (int i = 0; i <= n; i++) {
        if (in[i] == last && i < n) {
            freq++;
        } else {
            pos += sprintf(out + pos, "%c%d", last, freq);
            if (i < n) { last = in[i]; freq = 1; }
        }
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