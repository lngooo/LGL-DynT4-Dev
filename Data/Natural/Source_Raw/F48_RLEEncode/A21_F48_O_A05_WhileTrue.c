/**
 * LGL-DynT4 Dataset - Function: RLEEncode
 * -----------------------------------------
 * File: A21_F48_O_A05_WhileTrue.c
 * Implementation Logic: WhileTrue
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void RLEEncode(const char *in, char *out) {
    int i = 0, j = 0;
    while (1) {
        if (in[i] == '\0') break;
        int count = 0;
        char target = in[i];
        while (in[i + count] == target) count++;
        out[j++] = target;
        j += sprintf(out + j, "%d", count);
        i += count;
    }
    out[j] = '\0';
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 0;
    char *input = argv[1];
    char output[256] = {0};
    RLEEncode(input, output);
    printf("%s\n", output);
    return 0;
}