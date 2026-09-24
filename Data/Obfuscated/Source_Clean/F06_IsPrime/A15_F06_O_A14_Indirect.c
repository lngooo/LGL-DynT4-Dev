typedef long long (*H)(long long, long long, long long);
long long o(long long S4, long long rc7e, long long IKQ) { return (S4 * rc7e) % IKQ; }

int l(int b9n) {
    if (b9n < 4) return b9n > 1;
    H W0 = o;
    int etkK = b9n - 1;
    while (!(etkK & 1)) etkK >>= 1;
    long long K1 = 1, R5Iv = 2;
    for(; etkK > 0; etkK >>= 1) { if(etkK & 1) K1 = W0(K1, R5Iv, b9n); R5Iv = W0(R5Iv, R5Iv, b9n); }
    if (K1 == 1 || K1 == b9n - 1) return 1;
    for (int WViY = 2; WViY * WViY <= b9n; WViY++) if (b9n % WViY == 0) return 0;
    return 1;
}