int GCD(int a, int b) {
    a = abs(a); b = abs(b);
    if (b == 0) return a;
    return GCD(b, a % b);
}