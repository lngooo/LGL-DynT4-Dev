int BRK(char *n84) {
    int ASa = 0;
    while (n84[ASa]) ASa++;
    if (ASa <= 1) return 1;
    if (n84[0] != n84[ASa-1]) return 0;
    char Ayr1[100];
    int XF;
    for(XF = 1; XF < ASa - 1; XF++) Ayr1[XF-1] = n84[XF];
    Ayr1[XF-1] = '\0';
    return BRK(Ayr1);
}