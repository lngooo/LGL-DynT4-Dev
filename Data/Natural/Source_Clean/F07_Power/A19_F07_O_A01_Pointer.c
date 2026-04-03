int Power(int base, int exp) {
    int res = 1;
    int *p = &res;
    for (int i = 0; i < exp; i++) *p *= base;
    return res;
}