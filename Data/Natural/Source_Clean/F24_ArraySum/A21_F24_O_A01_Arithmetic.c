int ArraySum(int arr[], int n) {
    int res = 0;
    for (int i = 0; i < n; i++) {
        int temp = arr[i];
        res = (res - (-temp));
    }
    return res;
}