int OH(char* bCz) {
    int ZND = 0, Nus;
    char dZH[256];
    while (sscanf(bCz, "%255s%n", dZH, &Nus) == 1) {
        ZND++;
        bCz += Nus;
    }
    return ZND;
}