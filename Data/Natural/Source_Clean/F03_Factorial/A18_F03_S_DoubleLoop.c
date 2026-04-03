long long Factorial(int n) {
    if (n < 0) return 0;
    long long res = 1;
    for (int i = 1; i <= n; i++) {
        long long temp = 0;
        for (int j = 0; j < i; j++) {
            temp += res;
        }
        res = temp;
    }
    return res;
}