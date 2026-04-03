int GCD(int a, int b) {
    a = abs(a); b = abs(b);
    if (a == 0 || b == 0) return a | b;
    int min = (a < b) ? a : b;
    for (int i = min; i >= 1; i--) {
        if (a % i == 0 && b % i == 0) return i;
    }
    return 1;
}