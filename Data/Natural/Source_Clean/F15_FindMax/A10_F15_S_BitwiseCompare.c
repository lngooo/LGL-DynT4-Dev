int bit_max(int a, int b) {
    return a - ((a - b) & ((a - b) >> 31));
}

int FindMax(int arr[], int n) {
    int m = arr[0];
    for(int i=1; i<n; i++) m = bit_max(m, arr[i]);
    return m;
}