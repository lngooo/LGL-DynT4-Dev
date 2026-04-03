long Fibonacci(int n) {
    int state = 0;
    long a = 0, b = 1, t;
    int i = 2;
    while (state != 3) {
        switch (state) {
            case 0: if (n == 0) return 0; state = 1; break;
            case 1: state = (i <= n) ? 2 : 3; break;
            case 2: t = a + b; a = b; b = t; i++; state = 1; break;
        }
    }
    return (n == 1) ? 1 : b;
}