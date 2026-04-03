long long Factorial(int n) {
    if (n < 0) return 0;
    long long res = 1;
    while (n > 1) {
        res *= n--;
    }
    return res;
}