int RemoveDuplicates(int arr[], int n) {
    int l = n;
    for (int i = 0; i < l; i++) {
        for (int j = i + 1; j < l; j++) {
            int is_eq = (arr[i] == arr[j]);
            if (is_eq) {
                for (int k = j; k < l - 1; k++) arr[k] = arr[k + 1];
                l--; j--;
            }
        }
    }
    return l;
}