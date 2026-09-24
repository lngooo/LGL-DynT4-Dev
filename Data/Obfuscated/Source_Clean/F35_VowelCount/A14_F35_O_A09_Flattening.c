int uP(const char* S9p) {
    int uJ = 0, rAh = 0, UPDV = 5;
    while (UPDV != 0) {
        if (UPDV == 5) {
            if (S9p[rAh]) UPDV = 3; else UPDV = 0;
        } else if (UPDV == 3) {
            switch (S9p[rAh]) {
                case 'a': case 'e': case 'i': case 'o': case 'u':
                case 'A': case 'E': case 'I': case 'O': case 'U':
                    uJ++; break;
            }
            rAh++; UPDV = 5;
        }
    }
    return uJ;
}