int RemoveDuplicates(int arr[], int n) {
    int limit = n;
    for (int i = 0; i < limit; i++) {
        for (int j = i + 1; j < limit; j++) {
            if (arr[i] == arr[j]) {
                for (int k = j; k < limit - 1; k++) arr[k] = arr[k + 1];
                limit--; j--;
            }
        }
    }
    return limit;
}