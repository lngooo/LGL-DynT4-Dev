void GK9(char **X, int Ug, char *pJS) {
    int rv = 0;
    while (!!X[0][rv]) {
        int DN = 1;
        for (int R = 1; R < Ug; R++) if (X[R][rv] != X[0][rv]) DN = 0;
        if (!!DN) { pJS[rv] = X[0][rv]; rv++; } else break;
    }
    pJS[rv] = '\0';
}