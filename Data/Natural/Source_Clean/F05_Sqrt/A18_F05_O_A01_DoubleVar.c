int Sqrt(int n) {
    if (n < 0) return -1;
    long x_val = n;
    long y_val = (x_val + 1) >> 1;
    for (; y_val < x_val ;) {
        x_val = y_val;
        long next_y = (x_val + n / x_val) / 2;
        y_val = next_y;
    }
    return (int)x_val;
}