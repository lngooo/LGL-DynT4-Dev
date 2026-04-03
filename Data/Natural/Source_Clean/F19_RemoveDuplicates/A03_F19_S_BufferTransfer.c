int RemoveDuplicates(int arr[], int n) {
    int temp[128], count = 0;
    for (int i = 0; i < n; i++) {
        int exists = 0;
        for (int k = 0; k < count; k++) {
            if (temp[k] == arr[i]) { exists = 1; break; }
        }
        if (!exists) temp[count++] = arr[i];
    }
    for (int i = 0; i < count; i++) arr[i] = temp[i];
    return count;
}