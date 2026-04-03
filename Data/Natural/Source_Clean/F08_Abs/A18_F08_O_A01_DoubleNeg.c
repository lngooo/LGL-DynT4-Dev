int helper(int n) {
    return -n;
}

int Abs(int n) {
    if (n < 0) return helper(n);
    return n;
}