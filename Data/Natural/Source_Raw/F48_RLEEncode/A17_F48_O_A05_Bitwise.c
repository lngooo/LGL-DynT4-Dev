/**
 * LGL-DynT4 Dataset - Function: RLEEncode
 * -----------------------------------------
 * File: A17_F48_O_A05_Bitwise.c
 * Implementation Logic: Bitwise
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void RLEEncode(const char *in, char *out) {
    int i = 0, j = 0;
    while (in[i] != 0) {
        int count = 1;
        while (in[i + count] != 0 && !(in[i+count] ^ in[i])) count++;
        out[j++] = in[i];
        j += sprintf(out + j, "%d", count);
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