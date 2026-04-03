int Power(int base, int exp) {
    if (exp == 0) return 1;
    return base * Power(base, exp - 1);
}