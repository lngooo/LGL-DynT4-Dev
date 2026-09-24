void athp(const char *Hld, char *M0p) {
    char *u = (char*)Hld;
    int MH = 0;
    while (*(u)) {
        int WM = 0;
        char za = *u;
        while (*(u + WM) == za) WM++;
        *(M0p + MH++) = za;
        MH += sprintf(M0p + MH, "%d", WM);
        u += WM;
    }
    M0p[MH] = 0;
}