int Sqrt(int n) {
    if (n < 0) return -1;
    int count = 0, odd = 1;
    while (n >= odd) {
        n -= odd;
        odd += 2;
        count++;
    }
    return count;
}