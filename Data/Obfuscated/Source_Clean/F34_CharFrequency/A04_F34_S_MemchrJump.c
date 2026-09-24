int aa(char* Mz64, char edh1) {
    int Gmef = 0;
    char* Nv = Mz64;
    int d = strlen(Mz64);
    while ((Nv = memchr(Nv, edh1, (Mz64 + d) - Nv)) != NULL) {
        Gmef++;
        Nv++;
    }
    return Gmef;
}