/**
* LGL-DynT4 Dataset - Function: AnagramCheck
* -----------------------------------------
* File: A07_F29_S_DualPointer.c
* Implementation Logic: Iterates through s1 and uses a second pointer to scan and nullify in s2.
* Input Format: <string1> <string2>
*/
#include <stdio.h>
#include <string.h>

int AnagramCheck(char* s1, char* s2) {
    int n1 = strlen(s1), n2 = strlen(s2);
    if (n1 != n2) return 0;
    char temp[256]; strcpy(temp, s2);
    for(int i=0; i<n1; i++) {
        int found = 0;
        for(int j=0; j<n2; j++) {
            if(s1[i] == temp[j]) {
                temp[j] = 0; found = 1; break;
            }
        }
        if(!found) return 0;
    }
    return 1;
}

int main(int argc, char* argv[]) {
    if (argc < 3) return 0;
    printf("%d\n", AnagramCheck(argv[1], argv[2]));
    return 0;
}