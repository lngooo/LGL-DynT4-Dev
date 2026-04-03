/**
 * LGL-DynT4 Dataset - Function: RLEEncode
 * -----------------------------------------
 * File: A15_F48_O_A04_DummyLoop.c
 * Implementation Logic: DummyLoop
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void RLEEncode(const char *in, char *out) {
    int i = 0, k = 0;
    while (in[i]) {
        int c = 0;
        char target = in[i];
        for(int d=0; d<1; d++) {
            while(in[i+c] == target) c++;
        }
        k += sprintf(out + k, "%c%d", target, c);
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