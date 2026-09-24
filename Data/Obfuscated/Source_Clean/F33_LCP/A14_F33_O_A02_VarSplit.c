void oc4(char **cUe9, int W, char *W9uy) {
    if (W <= 0) return;
    int D = 0, XJU3 = 0;
    char a[128]; strcpy(a, cUe9[0]);
    for (int n0 = 1; n0 < W; n0++) {
        int Z = 0, L = 0;
        while (a[Z+L] && cUe9[n0][Z+L] && a[Z+L] == cUe9[n0][Z+L]) Z++;
        a[Z+L] = '\0';
    }
    strcpy(W9uy, a);
}