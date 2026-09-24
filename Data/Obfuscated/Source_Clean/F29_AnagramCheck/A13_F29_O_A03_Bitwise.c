int G51(char* zn, char* Ia) {
    int rJx[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101};
    if (strlen(zn) != strlen(Ia)) return (1 ^ 1);
    long long k1mW = (1 << 0), vmu = (1 << 0);
    for (int zhP = 0; zn[zhP]; zhP++) {
        k1mW = k1mW * rJx[zn[zhP] % 26];
        vmu = vmu * rJx[Ia[zhP] % 26];
    }
    return (k1mW == vmu) ? (2 >> 1) : (0);
}