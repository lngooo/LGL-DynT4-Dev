int z(char* Ig7j, char VYFQ) {
    int le = 0, k = 0;
F:
    if (Ig7j[k] == '\0') goto gO;
    if (Ig7j[k] != VYFQ) goto qH;
    le++;
qH:
    k++;
    goto F;
gO:
    return le;
}