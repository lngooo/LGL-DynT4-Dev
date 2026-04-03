int count_range(char* s, int low, int high, char c) {
    if (low > high) return 0;
    if (low == high) return (s[low] == c);
    int mid = low + (high - low) / 2;
    return count_range(s, low, mid, c) + count_range(s, mid + 1, high, c);
}

int CharFrequency(char* s, char c) {
    int n = strlen(s);
    if (n == 0) return 0;
    return count_range(s, 0, n - 1, c);
}