int Power(int base, int exp) {
    if (exp == 0) return 1;
    int half = Power(base, exp / 2);
    if (exp % 2 == 0) return half * half;
    return base * half * half;
}