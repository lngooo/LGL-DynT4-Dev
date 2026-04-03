int GCD(int a, int b) {
    a = abs(a); b = abs(b);
    if (a == 0) return b;
    while (b != 0) {
        if (a > b) a = a - b;
        else b = b - a;
    }
    return a;
}