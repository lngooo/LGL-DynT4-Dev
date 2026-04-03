int IsPrime(int n) {
    if (n < 2) return 0;
    int i = 2;
    while (1) {
        if (i * i > n) return 1;
        switch (n % i) {
            case 0: return 0;
            default: i++; break;
        }
    }
}