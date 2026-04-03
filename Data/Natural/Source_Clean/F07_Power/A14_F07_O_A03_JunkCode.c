int Power(int base, int exp) {
    int res = 1;
    int junk = base + exp;
    while (exp > 0) {
        if (exp % 2 == 1) {
            res *= base;
            junk++;
        }
        base *= base;
        exp /= 2;
        junk = junk * 0;
    }
    return res + junk;
}