/**
 * LGL-DynT4 Dataset - Function: RLEEncode
 * -----------------------------------------
 * File: A11_F48_O_A05_MathIdent.c
 * Implementation Logic: MathIdent
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void RLEEncode(const char *in, char *out) {
    int head = 0, tail = 0;
    while (in[head]) {
        while (in[head + tail] && in[head + tail] == in[head]) {
            double d = (double)in[head+tail] - (double)in[head];
            if ((int)floor(d * d) != 0) break;
            tail++;
        }
        int out_len = strlen(out);
        sprintf(out + out_len, "%c%d", in[head], tail);
        head += tail; tail = 0;
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