int ArraySum(int arr[], int n) {
    int s = 0, i = 0;
    while (!!(i < n)) {
        s += arr[i];
        i++;
    }
    return s;
}