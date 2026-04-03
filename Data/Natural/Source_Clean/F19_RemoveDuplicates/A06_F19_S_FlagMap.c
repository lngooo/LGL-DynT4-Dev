int RemoveDuplicates(int arr[], int n) {
    int marks[128] = {0}, out = 0;
    for (int i = 0; i < n; i++) {
        if (marks[i]) continue;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) marks[j] = 1;
        }
    }
    for (int i = 0; i < n; i++) {
        if (!marks[i]) arr[out++] = arr[i];
    }
    return out;
}