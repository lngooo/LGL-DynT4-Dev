void cz(char *pB1a, int ciU) {

    char *P = pB1a;
    int r1aN = (ciU % 26 + 26) % 26;
    for (; *P != '\0'; P++) {
        if (*P >= 65 && *P <= 90) *P = ((*P - 65) + r1aN) % 26 + 65;
        else if (*P >= 97 && *P <= 122) *P = ((*P - 97) + r1aN) % 26 + 97;
    }
}