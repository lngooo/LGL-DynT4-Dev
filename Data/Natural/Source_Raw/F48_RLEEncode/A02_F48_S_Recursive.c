/**
 * LGL-DynT4 Dataset - Function: RLEEncode
 * -----------------------------------------
 * File: A02_F48_S_Recursive.c
 * Implementation Logic: Recursive
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void RLEEncode(const char *in, char *out) {
    if (*in == '\0') return;
    int count = 1;
    while (in[count] != '\0' && in[count] == in[0]) count++;
    char buf[16];
    sprintf(buf, "%c%d", in[0], count);
    strcat(out, buf);
    RLEEncode(in + count, out);
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 0;
    char *input = argv[1];
    char output[256] = {0};
    RLEEncode(input, output);
    printf("%s\n", output);
    return 0;
}