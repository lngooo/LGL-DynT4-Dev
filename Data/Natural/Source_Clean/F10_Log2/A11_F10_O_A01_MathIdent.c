int Log2(int n) {
    int c = 0;
    while (n > 1) {
        double d = (double)n / 2.0;
        n = (int)floor(d);
        c++;
    }
    return c;
}