/**
 * LGL-DynT4 Dataset - Function: StrLen
 * -----------------------------------------
 * File: A17_F26_O_A01_State.c
 * Implementation Logic: Custom state machine for length.
 */
#include <stdio.h>

int StrLen(const char *s) {
    int i = 0;
    int state = 10;
    while (state != 0) {
        if (state == 10) {
            if (s[i] != '\0') state = 20;
            else state = 0;
        } else if (state == 20) {
            i++;
            state = 10;
        }
    }
    return i;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 0;
    printf("%d\n", StrLen(argv[1]));
    return 0;
}