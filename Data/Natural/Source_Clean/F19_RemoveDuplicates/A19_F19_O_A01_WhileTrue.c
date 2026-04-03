int RemoveDuplicates(int arr[], int n) {
    int k = 0, p = 0;
    while (p < n) {
        int target = arr[p], exist = 0;
        for (int j = 0; j < k; j++) if (arr[j] == target) exist = 1;
        if (!exist) { arr[k] = target; k++; }
        p++;
    }
    return k;
}