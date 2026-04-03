/**
 * LGL-DynT4 Dataset - Function: RLEEncode
 * -----------------------------------------
 * File: A16_F48_O_A02_StackSim.c
 * Implementation Logic: StackSim
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void RLEEncode(const char *in, char *out) {
    if (!*in) return;
    int n = 0;
    while (in[n] == in[0]) n++;
    int cur = strlen(out);
    out[cur] = in[0];
    sprintf(out + cur + 1, "%d", n);
    RLEEncode(in + n, out);
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 0;
    char *input = argv[1];
    char output[256] = {0};
    RLEEncode(input, output);
    printf("%s\n", output);
    return 0;
}