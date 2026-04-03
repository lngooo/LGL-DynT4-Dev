/**
 * LGL-DynT4 Dataset - Function: RLEEncode
 * -----------------------------------------
 * File: A14_F48_O_A01_Unroll.c
 * Implementation Logic: Unroll
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void RLEEncode(const char *in, char *out) {
    int i = 0, j = 0;
    while (in[i]) {
        int c = 1;
        if (in[i+1] == in[i]) {
            c = 2;
            while (in[i+c] == in[i]) c++;
        }
        out[j++] = in[i];
        j += sprintf(out + j, "%d", c);
        i += c;
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