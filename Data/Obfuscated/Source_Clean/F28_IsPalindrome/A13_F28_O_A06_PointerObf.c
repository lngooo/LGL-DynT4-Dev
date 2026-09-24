int SrS2(char *hQ) {
    char *Cg = hQ;
    char *i = hQ;
    while (*i) i++;
    i = i - 1;
    while (Cg < i) {
        if (*Cg - *i != 0) return 0;
        Cg++;
        i--;
    }
    return 1;
}