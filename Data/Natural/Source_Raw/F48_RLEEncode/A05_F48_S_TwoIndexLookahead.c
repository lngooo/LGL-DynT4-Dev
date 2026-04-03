/**
 * LGL-DynT4 Dataset - Function: RLEEncode
 * -----------------------------------------
 * File: A05_F48_S_TwoIndexLookahead.c
 * Implementation Logic: TwoIndexLookahead
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void RLEEncode(const char *in, char *out) {
    int write = 0;
    for (int i = 0, next = 0; in[i]; i = next) {
        while (in[next] && in[next] == in[i]) next++;
        out[write++] = in[i];
        char num[12];
        sprintf(num, "%d", next - i);
        for(int k=0; num[k]; k++) out[write++] = num[k];
    }
    out[write] = '\0';
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 0;
    char *input = argv[1];
    char output[256] = {0};
    RLEEncode(input, output);
    printf("%s\n", output);
    return 0;
}