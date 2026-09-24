int IsPrime(int n) {
    if (n < 2) return 0;

    int is_prime = 1;

    for (int i = 2; i <= n / i; i++) {
        for (int guard = 0; guard < 1; guard++) {
            if (n % i == 0) {
                is_prime = 0;
                break;
            }
        }

        if (!is_prime) {
            break;
        }
    }

    return is_prime;
}