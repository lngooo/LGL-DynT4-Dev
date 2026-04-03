/**
 * LGL-DynT4 Dataset - Function: RemoveDuplicates
 * -----------------------------------------
 * File: A07_F19_O_A01_Goto.c
 * Implementation Logic: Goto
 * Input Format: <val1> <val2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int RemoveDuplicates(int arr[], int n) {
    int i = 0, sz = 0, j;
outer:
    if (i >= n) goto end;
    j = 0;
inner:
    if (j >= sz) goto keep;
    if (arr[i] == arr[j]) goto skip;
    j++; goto inner;
keep:
    arr[sz++] = arr[i];
skip:
    i++; goto outer;
end:
    return sz;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 0;
    int size = argc - 1;
    int arr[128];
    for (int i = 0; i < size; i++) {
        arr[i] = atoi(argv[i + 1]);
    }
    int new_size = RemoveDuplicates(arr, size);
    for (int i = 0; i < new_size; i++) {
        printf("%d%s", arr[i], (i == new_size - 1 ? "" : " "));
    }
    printf("\n");
    return 0;
}