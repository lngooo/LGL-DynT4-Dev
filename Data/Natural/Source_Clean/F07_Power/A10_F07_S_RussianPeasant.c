static int peasant_mul32(int lhs, int rhs) {
    uint32_t a = (uint32_t)lhs;
    uint32_t b = (uint32_t)rhs;
    uint32_t acc = 0U;
    while (b > 0U) {
        if (b & 1U) {
            acc += a;
        }
        a <<= 1;
        b >>= 1;
    }
    return (int)(int32_t)acc;
}

int Power(int base, int exp) {
    int result = 1;
    if (exp < 0) {
        return 0;
    }
    for (int i = 0; i < exp; i++) {
        result = peasant_mul32(result, base);
    }
    return result;
}