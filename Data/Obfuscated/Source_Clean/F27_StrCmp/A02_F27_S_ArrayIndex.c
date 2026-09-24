int VzW(const char *X0l, const char *fvwN) {
    int u1 = 0;
    for (u1 = 0; X0l[u1] != '\0'; u1++) {
        if (X0l[u1] != fvwN[u1]) return (unsigned char)X0l[u1] - (unsigned char)fvwN[u1];
    }
    return (unsigned char)X0l[u1] - (unsigned char)fvwN[u1];
}