int Lk4T(const char *WsoH) {
    int f = 0;
    int p32 = 10;
    while (p32 != 0) {
        if (p32 == 10) {
            if (WsoH[f] != '\0') p32 = 20;
            else p32 = 0;
        } else if (p32 == 20) {
            f++;
            p32 = 10;
        }
    }
    return f;
}