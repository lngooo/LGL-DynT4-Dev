int GCD(int a, int b) {
    a = abs(a); b = abs(b);
    if (a == 0 || b == 0) return a | b;
    int res = 1, d = 2;
    while (d <= a && d <= b) {
        if (a % d == 0 && b % d == 0) {
            res *= d; a /= d; b /= d;
        } else d++;
    }
    return res;
}