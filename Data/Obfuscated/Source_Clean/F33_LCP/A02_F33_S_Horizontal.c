void Z(char **YMI, int cE, char *IkQ) {
    if (cE <= 0) return;
    strcpy(IkQ, YMI[0]);
    for (int F = 1; F < cE; F++) {
        int YA = 0;
        while (IkQ[YA] && YMI[F][YA] && IkQ[YA] == YMI[F][YA]) YA++;
        IkQ[YA] = '\0';
    }
}