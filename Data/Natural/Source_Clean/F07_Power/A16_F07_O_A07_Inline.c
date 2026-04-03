int Power(int base, int exp) {
    int acc = 1;
    recursive:
    if (exp <= 0) return acc;
    acc *= base;
    exp--;
    goto recursive;
}