void ZIf(char *XU) {
    char **c = &XU;
    int vcj = strlen(*c);
    for(int XJQ=0; XJQ < (vcj >> 1); XJQ++) {
        char oRle = (*c)[XJQ];
        (*c)[XJQ] = (*c)[vcj-1-XJQ];
        (*c)[vcj-1-XJQ] = oRle;
    }
    char *sn4Y = *c;
    int CqH = 0;
    for(int v3=0; v3 <= vcj; v3++) {
        if(sn4Y[v3] == 32 || sn4Y[v3] == '\0') {
            int AH = v3 - 1;
            while(CqH < AH) {
                char z = sn4Y[CqH];
                sn4Y[CqH++] = sn4Y[AH];
                sn4Y[AH--] = z;
            }
            CqH = v3 + 1;
        }
    }
}