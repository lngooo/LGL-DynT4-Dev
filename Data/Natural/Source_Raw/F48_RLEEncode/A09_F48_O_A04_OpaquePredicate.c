/**
 * LGL-DynT4 Dataset - Function: RLEEncode
 * -----------------------------------------
 * File: A09_F48_O_A04_OpaquePredicate.c
 * Implementation Logic: OpaquePredicate
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void RLEEncode(const char *in, char *out) {
    int n = strlen(in), p = 0;
    if ((n * n + 1) > 0) {
        for (int i = 0; i < n; ) {
            int c = 1;
            while (i + c < n && in[i] == in[i+c]) c++;
            p += sprintf(out + p, "%c%d", in[i], c);
            i += c;
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