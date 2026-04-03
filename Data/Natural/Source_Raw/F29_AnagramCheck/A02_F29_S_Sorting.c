/**
* LGL-DynT4 Dataset - Function: AnagramCheck
* -----------------------------------------
* File: A02_F29_S_Sorting.c
* Implementation Logic: Sorts both strings using bubble sort and compares the results.
* Input Format: <string1> <string2>
*/
#include <stdio.h>
#include <string.h>

void sort(char* s, int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (s[j] > s[j+1]) {
                char temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }
        }
    }
}

int AnagramCheck(char* s1, char* s2) {
    int n1 = strlen(s1);
    int n2 = strlen(s2);
    if (n1 != n2) return 0;
    char t1[256], t2[256];
    strcpy(t1, s1); strcpy(t2, s2);
    sort(t1, n1); sort(t2, n2);
    return strcmp(t1, t2) == 0;
}

int main(int argc, char* argv[]) {
    if (argc < 3) return 0;
    printf("%d\n", AnagramCheck(argv[1], argv[2]));
    return 0;
}