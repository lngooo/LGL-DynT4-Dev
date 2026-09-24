int nKON(char *c) {
    int n5Sh = 0;
    while (c[n5Sh]) n5Sh++;
    int a5p = 0, ly0 = n5Sh - 1;
    while (a5p < ly0) {
        if (c[a5p] != c[ly0]) return 0;
        a5p++; ly0--;
    }
    return 1;
}