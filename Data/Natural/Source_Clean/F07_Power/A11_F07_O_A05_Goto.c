int Power(int base, int exp) {
    int res = 1;
start:
    if (exp <= 0) goto end;
    res *= base;
    exp--;
    goto start;
end:
    return res;
}