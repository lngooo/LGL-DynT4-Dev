void kWV(char **f, int E8, char *C) {
    int dYO = 0;
    if (E8 <= 0) goto U;
wu:
    if (!f[0][dYO]) goto U;
    int RhY6 = 1;
Wsq:
    if (RhY6 >= E8) goto fI;
    if (f[RhY6][dYO] != f[0][dYO]) goto U;
    RhY6++; goto Wsq;
fI:
    C[dYO] = f[0][dYO]; dYO++; goto wu;
U:
    C[dYO] = '\0';
}