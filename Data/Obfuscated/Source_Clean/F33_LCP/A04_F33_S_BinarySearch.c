void k(char **yakx, int I, char *R1) {
    if (I <= 0) return;
    int gfWk = 128;
    for(int ej=0; ej<I; ej++) {
        int gBoS = strlen(yakx[ej]);
        if(gBoS < gfWk) gfWk = gBoS;
    }
    int rT = 1, Ck1 = gfWk, CB = 0;
    while(rT <= Ck1) {
        int N1 = (rT + Ck1) / 2;
        int ruqM = 1;
        for(int ej=1; ej<I; ej++) {
            if(strncmp(yakx[0], yakx[ej], N1) != 0) { ruqM = 0; break; }
        }
        if(ruqM) { CB = N1; rT = N1 + 1; }
        else Ck1 = N1 - 1;
    }
    strncpy(R1, yakx[0], CB); R1[CB] = '\0';
}