int RemoveDuplicates(int arr[], int n) {
    int m[128] = {0}, top = 0;
    for (int i = 0; i < n; i++) {
        if (m[i]) continue;
        for (int j = i + 1; j < n; j++) {
            if (!(arr[i] ^ arr[j])) m[j] = 1;
        }
    }
    for (int i = 0; i < n; i++) if (!m[i]) arr[top++] = arr[i];
    return top;
}