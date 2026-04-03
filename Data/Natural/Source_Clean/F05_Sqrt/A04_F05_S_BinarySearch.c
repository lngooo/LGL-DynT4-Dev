int Sqrt(int n) {
    if (n < 0) return -1;
    if (n < 2) return n;
    long low = 0, high = n, ans = 0;
    while (low <= high) {
        long mid = low + (high - low) / 2;
        if (mid * mid <= n) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return (int)ans;
}