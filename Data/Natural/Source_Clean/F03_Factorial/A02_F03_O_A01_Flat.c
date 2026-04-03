long long Factorial(int n) {
    if (n < 0) return 0;
    long long res = 1;
    int i = 1, state = 0;
    while (state != 2) {
        switch (state) {
            case 0: state = (i <= n) ? 1 : 2; break;
            case 1: res *= i; i++; state = 0; break;
        }
    }
    return res;
}