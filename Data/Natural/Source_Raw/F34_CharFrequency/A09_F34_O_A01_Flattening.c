/**
* LGL-DynT4 Dataset - Function: CharFrequency
* -----------------------------------------
* File: A09_F34_O_A01_Flattening.c
* Logic: Control flow flattening via state variable derived from A01.
*/
#include <stdio.h>

int CharFrequency(char* s, char c) {
    int count = 0, i = 0, state = 0;
    while (state != -1) {
        switch (state) {
            case 0: state = (s[i] != '\0') ? 1 : 3; break;
            case 1: if (s[i] == c) count++; state = 2; break;
            case 2: i++; state = 0; break;
            case 3: state = -1; break;
        }
    }
    return count;
}

int main(int argc, char* argv[]) {
    if (argc < 3) return 0;
    printf("%d\n", CharFrequency(argv[1], argv[2][0]));
    return 0;
}