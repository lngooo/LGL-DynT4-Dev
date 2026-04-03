/**
 * LGL-DynT4 Dataset - Function: ReverseWords
 * -----------------------------------------
 * File: A15_F38_O_A01_DoublePtr.c
 * Implementation Logic: 深度混淆：基于 A01 的多重指针嵌套
 * Input Format: <string>
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void ReverseWords(char *s) {
    char **ptr_s = &s;
    int len = strlen(*ptr_s);
    for(int i=0; i < (len >> 1); i++) {
        char t = (*ptr_s)[i];
        (*ptr_s)[i] = (*ptr_s)[len-1-i];
        (*ptr_s)[len-1-i] = t;
    }
    char *walker = *ptr_s;
    int head = 0;
    for(int j=0; j <= len; j++) {
        if(walker[j] == 32 || walker[j] == '\0') {
            int tail = j - 1;
            while(head < tail) {
                char tmp = walker[head];
                walker[head++] = walker[tail];
                walker[tail--] = tmp;
            }
            head = j + 1;
        }
    }
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
