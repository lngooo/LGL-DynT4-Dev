/**
 * LGL-DynT4 Dataset - Function: RLEEncode
 * -----------------------------------------
 * File: A20_F48_O_A04_LogicWrap.c
 * Implementation Logic: LogicWrap
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void RLEEncode(const char *in, char *out) {
    int i = 0, n = strlen(in);
    char buf[256] = {0};
    for (; i < n; ) {
        int c = 1;
        for (int k = i + 1; k < n; k++) {
            if (in[k] == in[i]) c++;
            else break;
        }
        int cur = strlen(buf);
        buf[cur] = in[i];
        sprintf(buf + cur + 1, "%d", c);
        i += c;
    }
    strcpy(out, buf);
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 0;
    char *input = argv[1];
    char output[256] = {0};
    RLEEncode(input, output);
    printf("%s\n", output);
    return 0;
}