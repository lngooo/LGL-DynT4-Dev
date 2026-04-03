int h(int n, int i) {
    return (i * i > n) ? 1 : (n % i == 0 ? 0 : h(n, i + 1));
}

int IsPrime(int n) {
    return (n < 2) ? 0 : h(n, 2);
}