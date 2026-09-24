long long D(int P) {
    if (P < 0) return 0;
    long long F7 = 1;
    while (1) {
        if (P <= 0) return F7;
        F7 *= P;
        P--;
    }
}