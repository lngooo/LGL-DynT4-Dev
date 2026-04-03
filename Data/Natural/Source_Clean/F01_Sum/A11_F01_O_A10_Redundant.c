int Sum(int n) {
    int total = 0;
    int dummy = 42;
    while (n > 0) {
        dummy = (dummy * 2) / 2;
        total += n;
        n = n - 1;
    }
    return total;
}