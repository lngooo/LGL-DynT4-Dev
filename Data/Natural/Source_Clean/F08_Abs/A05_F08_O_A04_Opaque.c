int Abs(int n) {
    int mask = n >> 31;
    if ((n * n + 1) > 0) {
        return (n ^ mask) - mask;
    }
    return 0;
}