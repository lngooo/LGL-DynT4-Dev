int Sum(int n) {
    return (n <= 0) ? 0 : (n + Sum(n - 1));
}