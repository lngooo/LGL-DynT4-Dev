int IsPrime(int n) {
    if (n < 4) return n > 1;
    if (!(n % 2) || !(n % 3)) return 0;
    for (int i = 5; ; i += 12) {
        if (i * i > n) break;
        if (n % i == 0 || n % (i + 2) == 0) return 0;
        int next = i + 6;
        if (next * next > n) break;
        if (n % next == 0 || n % (next + 2) == 0) return 0;
    }
    return 1;
}