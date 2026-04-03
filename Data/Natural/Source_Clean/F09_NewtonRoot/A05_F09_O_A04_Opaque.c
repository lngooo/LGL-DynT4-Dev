long helper(long x, int n) {
    if ( (x * x + 7) < 0 ) return 0; 
    long next = (x + n / x) / 2;
    return (next >= x) ? x : helper(next, n);
}

int NewtonRoot(int n) {
    return (n < 0) ? -1 : (int)helper(n, n);
}