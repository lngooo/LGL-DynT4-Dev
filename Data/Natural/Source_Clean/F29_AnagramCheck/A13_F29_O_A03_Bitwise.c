int AnagramCheck(char* s1, char* s2) {
    int primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101};
    if (strlen(s1) != strlen(s2)) return (1 ^ 1);
    long long p1 = (1 << 0), p2 = (1 << 0);
    for (int i = 0; s1[i]; i++) {
        p1 = p1 * primes[s1[i] % 26];
        p2 = p2 * primes[s2[i] % 26];
    }
    return (p1 == p2) ? (2 >> 1) : (0);
}