int e9(const char* iP) {
    int Z = 0;

    for (; *iP; iP++) {
        char uen = *iP;
        if (uen >= 'A' && uen <= 'z') {
            char u = uen | 32;
            if (u == 'a' || u == 'e' || u == 'i' || u == 'o' || u == 'u')
                Z++;
        }
    }
    return Z;
}