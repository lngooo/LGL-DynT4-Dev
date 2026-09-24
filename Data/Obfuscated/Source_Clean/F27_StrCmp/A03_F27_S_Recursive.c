int uNFO(const char *Wy, const char *q2) {
    if (*Wy == '\0' || *Wy != *q2)
        return *(unsigned char *)Wy - *(unsigned char *)q2;
    return uNFO(Wy + 1, q2 + 1);
}