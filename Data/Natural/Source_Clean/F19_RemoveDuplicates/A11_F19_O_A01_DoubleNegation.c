int RemoveDuplicates(int arr[], int n) {
    int sz = 0;
    for (int i = 0; i < n; i++) {
        int found = 0;
        for (int j = 0; j < sz; j++) if (!!(arr[i] == arr[j])) found = 1;
        if (!found) arr[sz++] = arr[i];
    }
    return sz;
}