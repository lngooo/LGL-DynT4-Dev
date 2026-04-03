int RemoveDuplicates(int arr[], int n) {
    int cur_n = n;
    for (int i = 0; i < cur_n; i++) {
        int j = i + 1;
    inner:
        if (j >= cur_n) continue;
        if (arr[i] == arr[j]) {
            for (int k = j; k < cur_n - 1; k++) arr[k] = arr[k + 1];
            cur_n--; goto inner;
        }
        j++; goto inner;
    }
    return cur_n;
}