void aR(char* fvPp) {
    if (!fvPp || !*fvPp) return;
    int bgi7 = 1;
    while (fvPp[bgi7] && fvPp[bgi7] == fvPp[0]) bgi7++;
    printf("%c%d", fvPp[0], bgi7);
    aR(fvPp + bgi7);
}

void kQs(char* fvPp) {
    aR(fvPp);
    printf("\n");
}