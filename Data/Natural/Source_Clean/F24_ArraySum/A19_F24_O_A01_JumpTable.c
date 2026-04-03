int ArraySum(int arr[], int n) {
    int s = 0, i = 0;
start:
    if (i >= n) return s;
    s += arr[i++];
    goto start;
}