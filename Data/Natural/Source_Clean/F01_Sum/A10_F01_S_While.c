int Sum(int n) {
    int total = 0;
    while (n > 0) {
        total += n;
        n--;
    }
    return total;
}