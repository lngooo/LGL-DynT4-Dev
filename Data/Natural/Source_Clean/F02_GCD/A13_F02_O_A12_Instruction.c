int GCD(int a, int b) {
    long long x = abs(a), y = abs(b);
    if (!(x && y)) return (int)(x | y);
    long long m = (x > y) ? x : y;
    long long curr = m;
    while ((curr % x) | (curr % y)) { curr += m; }
    return (int)((x * y) / curr);
}