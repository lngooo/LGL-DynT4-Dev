int get_gcd(int a, int b) {
    return b == 0 ? a : get_gcd(b, a % b);
}

void ArrayRotate(int arr[], int n, int k) {
    if (n == 0) return;
    k = k % n;
    int gcd = get_gcd(k, n);
    for (int i = 0; i < gcd; i++) {
        int temp = arr[i];
        int j = i;
        while (1) {
            int d = (j + k) % n;
            if (d == i) break;
            arr[j] = arr[d];
            j = d;
        }
        arr[j] = temp;
    }
}