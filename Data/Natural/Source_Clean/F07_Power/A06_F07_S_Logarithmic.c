int Power(int base, int exp) {
    if (exp == 0) return 1;
    if (base == 0) return 0;
    double res = exp * log((double)base);
    return (int)(expf(res) + 0.5);
}