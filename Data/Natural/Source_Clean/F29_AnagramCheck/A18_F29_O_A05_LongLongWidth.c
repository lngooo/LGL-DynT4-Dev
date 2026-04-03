int AnagramCheck(char* s1, char* s2) {
    if (strlen(s1) != strlen(s2)) return 0;
    long long x = 0, a = 0;
    for (int i = 0; s1[i]; i++) {
        x ^= (long long)s1[i]; x ^= (long long)s2[i];
        a += (long long)s1[i]; a -= (long long)s2[i];
    }
    return (x == 0LL && a == 0LL);
}