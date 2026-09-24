void Euj(char *qyg5, char *Sb) {
    char *hCZX = qyg5, *ba = Sb;
    while (*hCZX) {
        if (!*ba) ba = Sb;
        *hCZX ^= *ba;
        hCZX++; ba++;
    }
}