void JlP3(const char *t1H, char *W8b) {
    int D = 0;
    for (int HG = 0, KlP = 0; t1H[HG]; HG = KlP) {
        while (t1H[KlP] && t1H[KlP] == t1H[HG]) KlP++;
        W8b[D++] = t1H[HG];
        char Orfe[12];
        sprintf(Orfe, "%d", KlP - HG);
        for(int IaB7=0; Orfe[IaB7]; IaB7++) W8b[D++] = Orfe[IaB7];
    }
    W8b[D] = '\0';
}