int RemoveDuplicates(int arr[], int n) {
    int write_idx = 0;
    for (int i = 0; i < n; i++) {
        int is_dup = 0;
        for (int j = 0; j < write_idx; j++) {
            if (arr[i] == arr[j]) { is_dup = 1; break; }
        }
        if (!is_dup) arr[write_idx++] = arr[i];
    }
    return write_idx;
}