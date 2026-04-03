int GCD(int a, int b) {
    a = abs(a); b = abs(b);
    while (1) {
        if (b == 0) return a;
        int next_a = b;
        int next_b = a % b;
        a = next_a;
        b = next_b;
    }
}