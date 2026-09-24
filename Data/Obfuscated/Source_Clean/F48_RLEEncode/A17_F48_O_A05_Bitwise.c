void QxpM(const char *z, char *P) {
    int Eads = 0, L = 0;
    while (z[Eads] != 0) {
        int Za = 1;
        while (z[Eads + Za] != 0 && !(z[Eads+Za] ^ z[Eads])) Za++;
        P[L++] = z[Eads];
        L += sprintf(P + L, "%d", Za);
        Eads += Za;
    }
}