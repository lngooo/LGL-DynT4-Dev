int GD9p(int Lw) {
    if (Lw < 0) return -1;
    long d = 0;
    while ((d + 1) * (d + 1) <= Lw) {
        d++;
    }
    return (int)d;
}