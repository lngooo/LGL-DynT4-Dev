int HexToInt(const char* s) {
    int n = (int)strlen(s);
    long long total = 0;
    long long b = 1;
    for(int i = n - 1; i >= 0; i--) {
        int val = (s[i] >= 'a') ? (s[i]-'a'+10) : ((s[i]>='A')?(s[i]-'A'+10):(s[i]-'0'));
        total += (long long)val * b;
        b *= 16;
    }
    return (int)total;
}