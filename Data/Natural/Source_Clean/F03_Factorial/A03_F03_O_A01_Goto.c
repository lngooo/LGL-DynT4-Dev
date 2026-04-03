long long Factorial(int n) {
    if (n < 0) return 0;
    long long res = 1;
    int i = 1;
loop:
    if (i > n) goto end;
    res *= i;
    i++;
    goto loop;
end:
    return res;
}