int RemoveDuplicates(int arr[], int n) {
    int *w = arr;
    for (int i = 0; i < n; i++) {
        int ok = 1;
        for (int j = 0; j < (int)(w - arr); j++) {
            if (*(arr + j) == *(arr + i)) ok = 0;
        }
        if (ok) { *w = *(arr + i); w++; }
    }
    return (int)(w - arr);
}