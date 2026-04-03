struct RotState { int n; int k; int g; };

int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }

void ArrayRotate(int arr[], int n, int k) {
    if (n == 0) return;
    struct RotState s = {n, k % n, gcd(k % n, n)};
    for (int i = 0; i < s.g; i++) {
        int t = arr[i], j = i;
        while (1) {
            int d = (j + s.k) % s.n;
            if (d == i) break;
            arr[j] = arr[d];
            j = d;
        }
        arr[j] = t;
    }
}