int Abs(int n) {
    int v = n;
    if (v < 0) {
        v = ~v;
        v = v + 1;
    }
    return v;
}