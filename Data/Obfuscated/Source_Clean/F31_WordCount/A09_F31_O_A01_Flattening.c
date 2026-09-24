int f(char* Z5vN) {
    int E99 = 0, KJJ = 0, OQu = 0;
    while (OQu != -1) {
        switch (OQu) {
            case 0: if (!*Z5vN) OQu = -1; else OQu = 1; break;
            case 1: if (isspace(*Z5vN)) KJJ = 0; else if (KJJ == 0) { KJJ = 1; E99++; }
                    Z5vN++; OQu = 0; break;
        }
    }
    return E99;
}