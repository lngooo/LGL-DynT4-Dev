int Sqrt(int n) {
    if (n < 0) return -1;
    long i = 0;
    for (;; i += 2) {
        if ((i + 1) * (i + 1) > n) return (int)i;
        if ((i + 2) * (i + 2) > n) return (int)(i + 1);
    }
}