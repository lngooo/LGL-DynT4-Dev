/**
* LGL-DynT4 Dataset - Function: CharFrequency
* -----------------------------------------
* File: A07_F34_S_DivideConquer.c
* Logic: Divide and conquer approach splitting string range.
*/
#include <stdio.h>
#include <string.h>

int count_range(char* s, int low, int high, char c) {
    if (low > high) return 0;
    if (low == high) return (s[low] == c);
    int mid = low + (high - low) / 2;
    return count_range(s, low, mid, c) + count_range(s, mid + 1, high, c);
}

int CharFrequency(char* s, char c) {
    int n = strlen(s);
    if (n == 0) return 0;
    return count_range(s, 0, n - 1, c);
}

int main(int argc, char* argv[]) {
    if (argc < 3) return 0;
    printf("%d\n", CharFrequency(argv[1], argv[2][0]));
    return 0;
}