int oA(char* kHe, char* fN) {
    long long K = (long long)strlen(kHe);
    long long sJ = (long long)strlen(fN);
    if (sJ == 0LL) return 0;
    for (long long B5kp = 0; B5kp <= K - sJ; B5kp++) {
        if (memcmp(kHe + B5kp, fN, (size_t)sJ) == 0) return (int)B5kp;
    }
    return -1;
}