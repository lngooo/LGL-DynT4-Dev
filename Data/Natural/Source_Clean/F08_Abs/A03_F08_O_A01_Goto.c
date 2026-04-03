int Abs(int n) {
    if (n >= 0) goto positive;
    return -n;
positive:
    return n;
}