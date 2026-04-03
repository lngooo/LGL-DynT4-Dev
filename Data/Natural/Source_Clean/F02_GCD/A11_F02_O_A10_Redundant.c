int GCD(int a, int b) {
    int x = abs(a), y = abs(b);
    if (x * y == 0) return x + y;
    int res = 1;
    int limit = (x < y) ? x : y;
    for (int j = 1; j <= limit; j++) {
        int m1 = x % j;
        int m2 = y % j;
        if (m1 == 0 && m2 == 0) res = j;
    }
    return res;
}