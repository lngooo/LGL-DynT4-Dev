int power_tail(int base, int exp, int acc) {
    if (exp <= 0) return acc;
    return power_tail(base, exp - 1, acc * base);
}

int Power(int base, int exp) {
    return power_tail(base, exp, 1);
}