int GCD(int a, int b) {
    if (b == 0) {
        if ((a * a + 1) > 0) return abs(a);
    }
    return GCD(abs(b), abs(a) % abs(b));
}