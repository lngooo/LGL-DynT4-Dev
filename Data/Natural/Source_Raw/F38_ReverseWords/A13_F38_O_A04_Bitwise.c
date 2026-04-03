/**
 * LGL-DynT4 Dataset - Function: ReverseWords
 * -----------------------------------------
 * File: A13_F38_O_A04_Bitwise.c
 * Implementation Logic: 位运算混淆：在 A04 循环中使用异或替代比较
 * Input Format: <string>
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void ReverseWords(char *s) {
    int n = strlen(s); char out[256]; memset(out, 0, 256);
    int last = n;
    for(int i = n - 1; i >= -1; i--) {
        int is_space = (i >= 0) ? (s[i] ^ ' ') : -1;
        if(is_space == 0 || i == -1) {
            strncat(out, s + i + 1, last - i - 1);
            if(i != -1) { char sp[2] = {32, 0}; strcat(out, sp); }
            last = i;
        }
    }
    strcpy(s, out);
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 0;
    char buffer[512] = "";
    for(int i = 1; i < argc; i++) {
        strcat(buffer, argv[i]);
        if(i < argc - 1) strcat(buffer, " ");
    }
    ReverseWords(buffer);
    printf("%s\n", buffer);
    return 0;
}
