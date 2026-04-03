/**
* LGL-DynT4 Dataset - Function: SubStrFind
* -----------------------------------------
* File: A16_F30_O_A02_PtrStep.c
* Implementation Logic: Changes pointer increment logic derived from A02.
*/
#include <stdio.h>
#include <string.h>

int SubStrFind(char* text, char* pattern) {
    int m = strlen(pattern);
    if (m == 0) return 0;
    for (char* p = text; *p; p = p + 1) {
        int flag = 1;
        for(int k=0; k<m; k++) if(*(p+k) != *(pattern+k)) flag = 0;
        if (flag) return (int)(p - text);
    }
    return -1;
}

int main(int argc, char* argv[]) {
    if (argc < 3) return 0;
    printf("%d\n", SubStrFind(argv[1], argv[2]));
    return 0;
}