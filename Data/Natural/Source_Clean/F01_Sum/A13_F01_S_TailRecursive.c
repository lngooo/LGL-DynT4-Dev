int tail_sum(int n, int acc) {
    if (n <= 0) return acc;
    return tail_sum(n - 1, acc + n);
}

int Sum(int n) {
    return tail_sum(n, 0);
}