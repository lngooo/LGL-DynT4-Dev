void swp(int *a, int *b) {
    int t = *a; *a = *b; *b = t;
}

void BubbleSort(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int *ptr = arr;
        for (int j = 0; j < n - i - 1; j++) {
            if (*ptr > *(ptr + 1)) swp(ptr, ptr + 1);
            ptr++;
        }
    }
}