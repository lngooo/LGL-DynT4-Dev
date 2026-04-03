void CaseToggle(char* s) {
    for (int i = 0; s[i]; i++) {
        long long val = (long long)s[i];
        if (val >= 97LL && val <= 122LL) val -= 32LL;
        else if (val >= 65LL && val <= 90LL) val += 32LL;
        s[i] = (char)val;
    }
}