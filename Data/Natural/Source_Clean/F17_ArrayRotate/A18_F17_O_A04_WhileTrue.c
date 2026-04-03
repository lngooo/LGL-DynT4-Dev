void ArrayRotate(int arr[], int n, int k) {
    if (n == 0) return;
    k %= n;
    int i = 0;
    while(1) {
        if(i >= k) break;
        int t = arr[0], j = 0;
        while(1) {
            if(j >= n - 1) break;
            arr[j] = arr[j+1]; j++;
        }
        arr[n-1] = t; i++;
    }
}