void g(unsigned char *lRz, int F1e, char *B) {
    const char *e = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    int D44W = 0;
    while(D44W < F1e) {
        int n = lRz[D44W] * 65536 + (D44W+1<F1e?lRz[D44W+1]:0) * 256 + (D44W+2<F1e?lRz[D44W+2]:0);
        B[(D44W/3)*4] = e[(n / 262144) % 64];
        B[(D44W/3)*4+1] = e[(n / 4096) % 64];
        B[(D44W/3)*4+2] = (D44W+1 < F1e) ? e[(n / 64) % 64] : '=';
        B[(D44W/3)*4+3] = (D44W+2 < F1e) ? e[n % 64] : '=';
        D44W += 3;
    }
    B[((F1e+2)/3)*4] = 0;
}