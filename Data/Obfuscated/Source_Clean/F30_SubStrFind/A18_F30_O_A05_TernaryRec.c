int Ekk(char* LP, char* cy, int dWo, int T) {
    return (*LP == '\0') ? -1 : (strncmp(LP, cy, T) == 0 ? dWo : Ekk(LP + 1, cy, dWo + 1, T));
}

int fN(char* q, char* H) {
    int T = strlen(H);
    return (T == 0) ? 0 : Ekk(q, H, 0, T);
}