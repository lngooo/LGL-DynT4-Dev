int Sqrt(int n) {
    if (n < 0) return -1;
    long l = 0, h = n, r = 0;
    while (l <= h) {
        long m = l + (h - l) / 2;
        if (m * m <= n) {
            r = m;
            if ((m * m) >= 0) l = m + 1; 
        } else {
            h = m - 1;
        }
    }
    return (int)r;
}