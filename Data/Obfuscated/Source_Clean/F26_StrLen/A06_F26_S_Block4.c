int V(const char *OdYm) {
    int aj = 0;
    for (;;) {
        if (OdYm[0] == 0) return aj;
        if (OdYm[1] == 0) return aj + 1;
        if (OdYm[2] == 0) return aj + 2;
        if (OdYm[3] == 0) return aj + 3;
        OdYm += 4; aj += 4;
    }
}