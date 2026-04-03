int SubStrFind(char* text, char* pattern) {
    long long n = (long long)strlen(text);
    long long m = (long long)strlen(pattern);
    if (m == 0LL) return 0;
    for (long long i = 0; i <= n - m; i++) {
        if (memcmp(text + i, pattern, (size_t)m) == 0) return (int)i;
    }
    return -1;
}