void g(char* cEZx) {
    int Igqk = strlen(cEZx);
    int fv = 0, lP = 0;
    while ((fv + lP) < Igqk) {
        int O = 1, E = fv + lP;
        while (E + 1 < Igqk && cEZx[E] == cEZx[E + 1]) { O++; E++; }
        printf("%c%d", cEZx[E], O);
        int UT = (E + 1) - (fv + lP);
        fv += UT;
    }
    printf("\n");
}