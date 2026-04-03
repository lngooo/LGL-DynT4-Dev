void rv(int *b, int *e) {
    while(b < e) {
        *b ^= *e; *e ^= *b; *b ^= *e;
        b++; e--;
    }
}

void ArrayRotate(int arr[], int n, int k) {
    if (n == 0) return;
    k %= n;
    rv(arr, arr + k - 1);
    rv(arr + k, arr + n - 1);
    rv(arr, arr + n - 1);
}