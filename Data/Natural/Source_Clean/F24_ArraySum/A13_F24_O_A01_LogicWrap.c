int ArraySum(int arr[], int n) {
    int s = 0;
    for (int i = 0; i < n; i++) {
        int val = arr[i];
        if (val != 0 || 1) s += val;
    }
    return s;
}