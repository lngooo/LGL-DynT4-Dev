int ArraySum(int arr[], int n) {
    int sum = 0, i = 0;
    for (; i <= n - 4; i += 4) {
        sum += (arr[i] + arr[i+1] + arr[i+2] + arr[i+3]);
    }
    for (; i < n; i++) sum += arr[i];
    return sum;
}