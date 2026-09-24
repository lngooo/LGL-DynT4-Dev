void fES(const char *Qk, char *frw) {
    if (!*Qk) return;
    int mqcM = 0;
    while (Qk[mqcM] == Qk[0]) mqcM++;
    int J = strlen(frw);
    frw[J] = Qk[0];
    sprintf(frw + J + 1, "%d", mqcM);
    fES(Qk + mqcM, frw);
}