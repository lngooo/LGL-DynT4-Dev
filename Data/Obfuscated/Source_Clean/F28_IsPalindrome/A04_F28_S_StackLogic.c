int gWh(char *m8fJ) {
    int miHc = 0;
    while (m8fJ[miHc]) miHc++;
    char Egho[100];
    for (int y = 0; y < miHc; y++) Egho[y] = m8fJ[y];
    for (int y = 0; y < miHc; y++) {
        if (m8fJ[y] != Egho[miHc - 1 - y]) return 0;
    }
    return 1;
}