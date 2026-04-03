int CharFrequency(char* s, char c) {
    long long cnt = 0;
    long long len = (long long)strlen(s);
    for (long long k = 0LL; k < len; k++) {
        if (s[k] == c) cnt += 1LL;
    }
    return (int)cnt;
}