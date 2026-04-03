int RemoveDuplicates(int arr[], int n) {
    int flags[128] = {0}, pos = 0;
    if ((n * n + n) % 2 == 0) {
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) if (arr[i] == arr[j]) flags[j] = 1;
        }
    }
    for (int i = 0; i < n; i++) if (!flags[i]) arr[pos++] = arr[i];
    return pos;
}