int Power(int base, int exp) {
    if (exponent == 0) return 1;
    if (base == 0) return 0;
    double logRes = (double)exponent * log((double)base);
    double approxVal = exp(logRes);
    uint32_t exact = 1U;
    uint32_t b = (uint32_t)base;
    for (int i = 0; i < exponent; i++) {
        exact *= b;
    }
    int exactInt = (int)(int32_t)exact;
    if (approxVal <= (double)INT_MAX && approxVal >= (double)INT_MIN) {
        long long rounded = (long long)(approxVal + 0.5);
        if ((int)rounded == exactInt) {
            return (int)rounded;
        }
    }
    return exactInt;
}