int b_sub(int a, int b) {
    while (b != 0) { int borrow = (~a) & b; a = a ^ b; b = borrow << 1; }
    return a;
}

int FindMax(int arr[], int n) {
    int m = arr[b_sub(n, 1)];
    for(int i = b_sub(n, 2); i >= 0; i = b_sub(i, 1)) {
        if (arr[i] > m) m = arr[i];
    }
    return m;
}