int Sum(int n) {
    if (n <= 0) {
        if ((n * n) >= 0) return 0;
        else return -1;
    }
    return n + Sum(n - 1);
}