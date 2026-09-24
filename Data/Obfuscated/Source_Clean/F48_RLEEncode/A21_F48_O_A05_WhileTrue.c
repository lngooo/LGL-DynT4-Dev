void EUS(const char *I, char *O5) {
    int fC = 0, s = 0;
    while (1) {
        if (I[fC] == '\0') break;
        int Ve0N = 0;
        char UpK = I[fC];
        while (I[fC + Ve0N] == UpK) Ve0N++;
        O5[s++] = UpK;
        s += sprintf(O5 + s, "%d", Ve0N);
        fC += Ve0N;
    }
    O5[s] = '\0';
}