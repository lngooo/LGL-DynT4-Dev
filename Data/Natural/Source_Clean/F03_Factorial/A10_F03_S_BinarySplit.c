long long range_prod(int start, int end) {
    if (start > end) return 1;
    if (start == end) return start;
    int mid = start + (end - start) / 2;
    return range_prod(start, mid) * range_prod(mid + 1, end);
}

long long Factorial(int n) {
    if (n < 0) return 0;
    if (n == 0) return 1;
    return range_prod(1, n);
}