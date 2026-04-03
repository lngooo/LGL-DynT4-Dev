/**
 * LGL-DynT4 Dataset - Function: ReverseWords
 * -----------------------------------------
 * File: A08_F38_O_A04_Flattening.c
 * Implementation Logic: 控制流平坦化：基于 A04 引入 Switch 状态机
 * Input Format: <string>
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void ReverseWords(char *s) {
    int state = 0, i, n = strlen(s), end; char res[256] = "";
    while(state != 99) {
        switch(state) {
            case 0: end = n; i = n - 1; state = 1; break;
            case 1: state = (i >= -1) ? 2 : 4; break;
            case 2: if(i == -1 || s[i] == ' ') {
                        strncat(res, s + i + 1, end - i - 1);
                        if(i != -1) strcat(res, " ");
                        end = i;
                    }
                    state = 3; break;
            case 3: i--; state = 1; break;
            case 4: strcpy(s, res); state = 99; break;
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
