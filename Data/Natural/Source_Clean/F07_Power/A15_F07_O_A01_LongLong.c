int Power(int base, int exp) {
    long long r = 1;
    long long b = base;
    for (int i = 0; i < exp; i++) r *= b;
    return (int)r;
}