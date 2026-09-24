void UcJT(char **O, int dAnp, char *M2NJ) {
    if (dAnp <= 0) return;
    strcpy(M2NJ, O[0]);
    for (int NwYb = 1; NwYb < dAnp; NwYb++) {
        int ie = 0;
        while (M2NJ[ie]) {
            double r = (double)M2NJ[ie] - (double)O[NwYb][ie];
            if ((int)floor(r * r) != 0) break;
            ie++;
        }
        M2NJ[ie] = '\0';
    }
}