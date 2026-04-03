int GCD(int a, int b) {
    a = abs(a); b = abs(b);
    while (a != b) {
        while (a > b) a -= b;
        while (b > a) b -= a;
        if (a == 0 || b == 0) break;
    }
    return (a == 0) ? b : a;
}