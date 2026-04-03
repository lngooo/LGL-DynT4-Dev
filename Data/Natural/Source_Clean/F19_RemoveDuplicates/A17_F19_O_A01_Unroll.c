int RemoveDuplicates(int arr[], int n) {
    int sz = 0;
    for (int i = 0; i < n; i++) {
        int f = 0;
        int j = 0;
        for (; j <= sz - 2; j += 2) {
            if (arr[i] == arr[j] || arr[i] == arr[j+1]) { f = 1; break; }
        }
        for (; j < sz; j++) if (arr[i] == arr[j]) f = 1;
        if (!f) arr[sz++] = arr[i];
    }
    return sz;
}