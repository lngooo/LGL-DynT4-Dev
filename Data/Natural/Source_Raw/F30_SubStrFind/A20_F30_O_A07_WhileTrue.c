/**
* LGL-DynT4 Dataset - Function: SubStrFind
* -----------------------------------------
* File: A20_F30_O_A07_WhileTrue.c
* Implementation Logic: Replaces strchr loop with while(1) + manual break derived from A07.
*/
#include <stdio.h>
#include <string.h>

int SubStrFind(char* text, char* pattern) {
    char* cur = text;
    int m = strlen(pattern);
    if (m == 0) return 0;
    while (1) {
        cur = strchr(cur, pattern[0]);
        if (!cur) break;
        int ok = 1;
        for(int k=0; k<m; k++) if(cur[k] != pattern[k]) ok = 0;
        if (ok) return (int)(cur - text);
        cur++;
    }
    return -1;
}

int main(int argc, char* argv[]) {
    if (argc < 3) return 0;
    printf("%d\n", SubStrFind(argv[1], argv[2]));
    return 0;
}