int GCD(int a, int b) {
    a = abs(a);
    b = abs(b);
    while (b) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}