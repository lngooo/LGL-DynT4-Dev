/**
 * LGL-DynT4 Dataset - Function: RLEEncode
 * -----------------------------------------
 * File: A01_F48_S_ClassicIterative.c
 * Implementation Logic: ClassicIterative
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void RLEEncode(const char *in, char *out) {
    int i = 0, j = 0, n = strlen(in);
    while (i < n) {
        int count = 1;
        while (i + 1 < n && in[i] == in[i+1]) { count++; i++; }
        j += sprintf(out + j, "%c%d", in[i], count);
        i++;
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