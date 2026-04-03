long long Factorial(int n) {
    if (n < 0) return 0;
    if (n == 0) return 1;
    long long part1 = 1, part2 = 1;
    int mid = n / 2;
    for (int i = 1; i <= mid; i++) part1 *= i;
    for (int i = mid + 1; i <= n; i++) part2 *= i;
    return part1 * part2;
}