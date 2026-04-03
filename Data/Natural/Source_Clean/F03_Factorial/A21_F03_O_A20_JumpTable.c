long long Factorial(int n) {
    if (n < 0) return 0;
    if (n == 0) return 1;
    long long res = 1;
    void *labels[] = {&&loop, &&exit};
loop:
    if (n > 0) {
        res *= n--;
        goto *labels[0];
    }
    goto *labels[1];
exit:
    return res;
}