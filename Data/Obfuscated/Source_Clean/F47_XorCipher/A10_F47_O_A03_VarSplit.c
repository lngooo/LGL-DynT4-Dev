void Dff(char *y2, char *S) {
    char *A = y2;
    int H = 0, DF = 0;
    int u = 0; while(S[u]) u++;
    while(*A) {
        *A ^= S[(H + DF) % u];
        A++; H++;
    }
}