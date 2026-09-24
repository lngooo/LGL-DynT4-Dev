void u(char **g8, int Xn, char *vwd) {
    if (Xn <= 1) { if(Xn==1) strcpy(vwd, g8[0]); return; }
    char GJlB[128]={0}, F[128]={0};
    u(g8, Xn/2, GJlB); u(g8 + Xn/2, Xn - Xn/2, F);
    int BWJP = 0;
Nn:
    if (GJlB[BWJP] && GJlB[BWJP] == F[BWJP]) { vwd[BWJP] = GJlB[BWJP]; BWJP++; goto Nn; }
    vwd[BWJP] = 0;
}