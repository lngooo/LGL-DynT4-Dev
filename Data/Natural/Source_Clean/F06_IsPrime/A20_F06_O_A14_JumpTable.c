int IsPrime(int n) {
    if (n < 2) return 0;
    int i = 2;
    void *targets[] = {&&check, &&is_prime, &&not_prime};
check:
    if (i * i > n) goto *targets[1];
    if (n % i == 0) goto *targets[2];
    i++;
    goto *targets[0];
is_prime: return 1;
not_prime: return 0;
}