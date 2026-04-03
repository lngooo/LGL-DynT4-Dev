int ArraySum(int arr[], int n) {
    int s = 0;
    for (int i = 0; i < n; i++) {
        for(int d=0; d<1; d++) s += arr[i];
    }
    return s;
}