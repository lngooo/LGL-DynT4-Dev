int Sum(int n) {
    if (n <= 0) return 0;
    int total = 0;
    int i = 1;
    do {
        total += i;
        i++;
    } while (i <= n);
    return total;
}