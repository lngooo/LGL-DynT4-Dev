void G(char* kU) {
    int kadl = 1, Ns = 0, O7 = 1;
    while (kadl != 0) {
        switch (kadl) {
            case 1: if (kU[Ns] == '\0') kadl = 0; else kadl = 2; break;
            case 2: if (isspace(kU[Ns])) { O7 = 1; kadl = 5; } else kadl = 3; break;
            case 3: if (O7) { kU[Ns] = toupper(kU[Ns]); O7 = 0; } else kU[Ns] = tolower(kU[Ns]); kadl = 5; break;
            case 5: Ns++; kadl = 1; break;
        }
    }
}